/*Two sum*/

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
		register int x = hash(nums[i]);
		if(max < hash(nums[i])) {
			max = hash(nums[i]);
		}
	}

	int hash_table[max + 1];

	for(int i = 0; i < max + 1; i++) {
		switch(hash_table[i]) {
			case 0:
				break;
			default:
				hash_table[i] = 0;
		}
	}
	

	for(int i = 0; i < numsSize; i++) {
		switch(hash_table[target-nums[i]]){
			case 0:
				break;	
			default:
				int *arr = malloc(sizeof(int) * 2);
				arr[0] = i;
				arr[1] = hash_table[hash(target-nums[i])] - 1;
				*returnSize = 2;
				return arr;
		}

		hash_table[hash(nums[i])] = i + 1;
	}
	return NULL;
}


int main() {
	int nums[] = {3,2,4};
	int retSize;
	int *ret = twoSum(nums, sizeof(nums)/sizeof(nums[0]), 6, &retSize);

	if(ret != NULL) {	
		printf("%d, ", ret[1]);
		printf("%d", ret[0]);
		printf("Freed!\n");
		free(ret);
	}
	return 1;
}
