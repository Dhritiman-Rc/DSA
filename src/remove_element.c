/*
 * Given an integere nums and an integer val, remove all occorruces of val in nums place. The order 
 * of elements may be changed.
 *
 * Input: nums = [3,2,2,3], val = 3
 * Output: 2, nums = [2,2,_,_]
 * */

#include <stdio.h>

#define SIZE_ARR(arr) (sizeof(arr)/sizeof(arr[0]))

void swap(int *i, int *j) {
	*i = *i ^ *j;
	*j = *i ^ *j;
	*i = *i ^ *j;
	return;
}

int removeElement(int *nums, int numsSize, int val) {
	int k = 0;
	int j = 0;
	for(int i = 0; i < numsSize; i++) {
		if(nums[j] == val) {
			if(nums[i] != nums[j]) {
				swap(&nums[i], &nums[j]);
				j++;
			}
		} 
		else {
			j++;
		}

		k = j;

	}

	return k;
}

int main() {
	
	int nums[] = {0,1,2,2,3,0,4,2}, val = 2;
	
	int ret_size =  removeElement(nums, SIZE_ARR(nums), val);

	for(int i = 0; i < ret_size; i++) {
		printf("%d, ", nums[i]);
	}
	printf("\n");

	return 0;
}
