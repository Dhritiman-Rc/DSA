/*
 * Longest palandromic nightamre
 * Problem: Given a string s, return the longest
 *          palandromic substring
 * */



#include <stdio.h>
#include <stdlib.h>



char* longestPalindrome(char* s) {
	int size_of_string = 0;


	while(s[size] != '\0') {
		size++;
	};
	
	int j = size_of_string - 1;

	/*Check if odd len*/
	switch( size_of_string % 2) {
	case 0:
		
		int res_len;
		for(int i = 0; i < size_of_string; i++) {
			int r = i, l = i;
			while(r - l + 1 >= 0 && r < size_of_string && s[r] == s[l]) {
				if(r - l + 1 > res_len) {

				}
			}
		}
	case 1:
	}

}

int main() {
	char *ptr = longestPalindrome("babad");
	if(ptr != NULL) {
		printf("%s", ptr);
		free(ptr);
		return 0;
	}
	return 1;
}
