//  #include <stdio.h>

void swap(char *i, char *j) {
	*i = *i ^ *j;
	*j = *i ^ *j;
	*i = *i ^ *j;
}

int is_vowel(char s) {
	switch(s) {
		case 'a': return true; case 'A': return true;
		case 'e': return true; case 'E': return true;
		case 'i': return true; case 'I': return true;
		case 'o': return true; case 'O': return true;
		case 'u': return true; case 'U': return true;

		default: return false;
	}
}

char *reverseVowels(char *s) {
	int size = 0;
	while(s[size] != '\0') {
		size++;
	}

	size--;



	int i = 0;
	
	while(i < size) {
		while(i < size && is_vowel(s[size]) == false) {
			size--;
		}

		while(i < size && is_vowel(s[i]) == false) {
			i++;
		}

		swap(&s[i], &s[size]);
		size--;
		i++;
	}

	return s;
}
/*int main() {
	char s[] = "ac";
	char *news = reverseVowels(s);

	printf("%s", news);
} */
