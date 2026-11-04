#include <stdio.h>

#define SIZE_ARR(arr) (sizeof(arr)/sizeof(arr[0]))

void swap(int *i, int *j) {
	
	*i = *i ^ *j;
	*j = *i ^ *j;
	*i = *i ^ *j;

	return;
}

void moveZeroes(int* nums, int numsSize) {
	int j = 0;
	for(int i = 0; i < numsSize; i++) {
		if(nums[j] == 0) {
			switch(nums[i]) {
				case 0:
					break;
				default:
					swap(&nums[i], &nums[j]);
					j++;
					break;
			}
		}
	}
}
/*
int main() {
	int arr[] = {0,1,0,3,12};

	moveZeroes(arr, SIZE_ARR(arr));

	for(int i = 0; arr[i] != 0; i++) {
		printf("%d", arr[i]);
	}
}*/
