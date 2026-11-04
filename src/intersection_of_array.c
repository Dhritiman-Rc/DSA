#include <stdio.h>
#include <stdlib.h>

#define SIZE_ARR(arr) (sizeof(arr)/sizeof(arr[0]))


int hash(int i) {
	register int tmp = i;
	i = i << 1;
	i = i ^ tmp;

	return i;
}


int min(int i, int j) {
	if(j < i) {
		return j;
	}
	return i;
}

int* init_hash_set(int *nums, int num_size) {
	int max = 0;
	for(int i = 0; i < num_size; i++) {
		int hashed = hash(nums[i]);
		if(hash(max) < hashed) {
			max = hashed;
		}
	}

	int *ptr = calloc(max + 1, sizeof(int));
	return ptr;
}

void free_hash_set(int *hash_set) {
	if(hash_set != NULL) {
		free(hash_set);
	}
	return;
}


int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

	*returnSize = min(nums1Size, nums2Size);
	int *ptr = malloc(sizeof(int) * (*returnSize));


	register int counter = 0;


	int *hash_set = init_hash_set(nums1, nums1Size);
	for(int i = 0; i < nums1Size; i++) {
		for(int j = 0; j < nums2Size; j++) {
			if(nums1[i] == nums2[j]) {
				int index = hash(nums1[i]);
				switch(hash_set[index]) {
					case 1:
						break;
					case 0:
						ptr[counter] = nums1[i];
						counter++;
						hash_set[index] = 1;
						break;
				}
			}
		}
	}
	
	*returnSize = counter --;

	free(hash_set);
	


	return ptr;
}

int main() {

	int nums1[] = {1,2,2,1};
	int nums2[] = {2,2};

	int ret_size = 0;


	int *ptr = intersection(nums1, SIZE_ARR(nums1), nums2, SIZE_ARR(nums2), &ret_size);

	for(int i = 0; i < ret_size; i++) {
		printf("%d, ", ptr[i]);
	}


	free(ptr);

	return 0;
}
