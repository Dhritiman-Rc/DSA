#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *current;
	int *next;
}linked_list_hash;

int hash(int i) {
	register int tmp = i;
	i = i << 1;
	i = i ^ tmp;
	return i;
}

int main() {
	int arr[] = {1,2,3,4,5,5};
	int max = 5
	int *arr = calloc(sizeof(int), max * 4);
	


	free(arr);
	return 0;
}
