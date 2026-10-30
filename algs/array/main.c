#include <stdio.h>

int insert(int i, int *arr, int size, int index) {
	for(int i = size - 1; i > index; i--) {
		arr[i] = arr[i - 1];
	}

	arr[index] = i;
	return 0;
}


int main() {
	// Initialise an zero'd array with size n=5,
	int arr[5] = {0}; /*As same as 0,0,0,0,0 */
	
	insert(3, arr, 5, 3);

	for(int i = 0; i < 5; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");
}
