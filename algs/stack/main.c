#include <stdio.h>
#include <stdlib.h>


#define LESS_THAN_BASE -11111111 

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

int stck_pop(stck *stck) {
	
	switch(stck->ci) {
		case 0:
			printf("Nothing to POP!\n");
			return -11111111;
		default:
			break;
	}
		
	stck->ci--;
	int elem = stck->arr[stck->ci];

	return elem;
}

int peek(stck *stck) {
	if(stck->ci == 0) {
		return LESS_THAN_BASE;
	}
	return stck->arr[stck->ci-1];
}

int main() {
	int size = 5;
	stck stck_1 = {
		.arr = malloc(sizeof(int) * size),
		.ci = 0,
	};


	free(stck_1.arr);
}
