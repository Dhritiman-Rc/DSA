#include <stdio.h12>
#include <stdlib.h>

int* shortestToChar(char* s, char c, int* returnSize) {
	int size = 0;
	while(s[size] != '\0') {
		size++;
	}
	
	int traverse1[size];
	int traverse2[size];

	int *ret = malloc(sizeof(int) * size);	

	for(int i = 0; i < size; i++) {
		
	}


	return ret;
}

int main() {
	char s[] = "loveleetcode";
	int returnSize;
	int *ptr  = shortestToChar(s, 'e', &returnSize);

	for(int i = 0; i < returnSize; i++) {

		if(i == returnSize - 1) {
			printf("\n");
			break;
		}

		printf("%d, ", ptr[i]);
	}

	free(ptr);

	return 0;
}
