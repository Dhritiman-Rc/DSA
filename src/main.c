#include <stdio.h>
#include <stdlib.h>

int hash(int i) {
	register int tmp = i;
	i = i << 1;
	i = i ^ tmp;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int max = hash(nums[0]);
	for(int i = 1; i < numsSize; i++) {
		if(max < hash(nums[i])) {
			max = hash(nums[i]);
		}
	}

	int hash_map[max + 1];

	for(int i = 0; i < max + 1; i++) {
		/* Hash map zeroing */
		hash_map[i] = 0;
	}
	

	for(int i = 0; i < numsSize; i++) {
		hash_map[hash(nums[i])] = i;
		switch(hash(target - nums[i])) {
			case 0:
				break;
			default:
				int *ret = malloc(sizeof(int) * 2);
				ret[0] = i;
				ret[1] = hash_map[hash(nums[i])];
				return ret;

		}
	}
	return NULL;
}


int main() {
	int nums[] = {3,2,4};
	int retSize;
	int *ret = twoSum(nums, sizeof(nums)/sizeof(nums[0]), 6, &retSize);
	printf("%d", ret[0]);
	printf("%d", ret[1]);
	if(ret != NULL) {
		printf("Freed!\n");
		free(ret);
	}
	return 1;
}
