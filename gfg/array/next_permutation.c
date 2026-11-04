#include <stdio.h>

int* shortestToChar(char* s, char c, int* returnSize) {
}

int main() {
	int s[] = "loveleetcode";
	int retSize = 0;
	int *arr = shortestToChar(s, 'e', retSize);

	for(int i=0; i < retSize; i++) {
		printf("%d", arr);
	}

	free(arr);
}
