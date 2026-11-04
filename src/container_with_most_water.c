/*
 *
 *
 * */


#include <stdio.h>
#define SIZE_ARR(arr) (sizeof(arr)/sizeof(arr[0]))


int min(int i, int j) {
	if(i < j) {
		return i;
	}
	return j;
}



int maxArea(int* height, int heightSize) {
	int j = heightSize - 1; int i = 0; int max = height[0] * height[j];
	/*
	while(i < j) {
		int res = (j - i) * min(height[i], height[j]);
		if(res > max) {
			max = res;
		} else {

			if(height[i] < height[j]) {
				i++;
			} else {
				j--;
			}
		}
	} */

	while(i < j) {
		int res = (j - i) * min(height[i], height[j]);
		if(res > max)  {
			max = res;
		}
		switch(i % 2) {
			case 0:
				i++;
			case 1:
				j--;
		}
	}	



		
	return max;
}


int main() {
	int arr[] = {1,8,6,2,5,4,8,3,7};
	printf("max height: %d \n", maxArea(arr, SIZE_ARR(arr)));
	
}
