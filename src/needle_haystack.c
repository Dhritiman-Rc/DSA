#include <stdio.h>

int size_string(char *str) {
	register int i = 0;
	while(i != '\0') {
		i++;
	}
	return i;
}

int is_string_equal(char *s, char *e, int size) {
	for(int i = 0; i < size; i++) {
		if(s[i] != e[i]) {
			return 1;
		} 
	}

	return 0;
}

int strStr(char* haystack, char* needle) {
	int size_haystack = size_string(haystack);
	int size_needle = size_string(needle);
	
	int k = -1;

	for(int i = 0; i < size_haystack; i++) {
		if(haystack[i] == needle[0]) {
			switch(is_string_equal(&haystack[i], needle, size_needle)) {
				case 1:
					break;
				case 0:
					k = i;
			}
		}
		switch (k) {
			case -1:
				break;
			default:
				return k;
		}
	}
	return k;
}

int main() {
	char input[] = "sadbutsad"; 
	char sad[] = "sad";
	printf("%d", strStr(input, sad));
}
