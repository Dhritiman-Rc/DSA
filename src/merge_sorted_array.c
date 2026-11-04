#include <stdio.h>

#define SIZE_ARR(arr) (sizeof(arr)/sizeof(arr[0]))

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	if(m == 0 || n == 0)i {
		return;    
	}
	
	 

	return;
}

int main() {
	int array_1[] = {1,2,3,0,0,0};
	int array_2[] = {2,5,6};

	merge(array_1, SIZE_ARR(array_1), 3, SIZE_ARR(array_2), 3);

	for(int i = 0; i < 6; i++) {
		printf("%d", array_1[i]);
	}
}
