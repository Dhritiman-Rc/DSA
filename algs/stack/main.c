#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *arr;
	int ci;  // Current index.
}stck;

void stck_push(stck *stck, int elem, int size) {
	if(stck->ci == size - 1) {
		return;
	}
	
	stck->arr[stck->ci] = elem;
	stck->ci++;
	return;
} 

int main() {
	stck stck_1 = {
		.arr = calloc(5, sizeof(int)),
		.ci = 0,
	};


	stck_push(&stck_1, 4, 5);
	stck_push(&stck_1, 5, 5);
	stck_push(&stck_1, 6, 5);

	
	printf("%d", stck_1.arr[0]);

	printf("%d", stck_1.arr[1]);

	printf("%d", stck_1.arr[2]);

	printf("%d", stck_1.arr[3]);

	free(stck_1.arr);
}
