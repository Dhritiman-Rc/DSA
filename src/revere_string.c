 // #include <stdio.h>

void swap(char *i, char *j) {
	*i = *i ^ *j;
	*j = *i ^ *j;
	*i = *i ^ *j;
	return;
}

void reverseString(char* s, int sSize) {
	sSize--;
	int i = 0;
	while(i < sSize) {
		swap(&s[i], &s[sSize]);
		i++;
		sSize--;
	}

	return;
}
/*
int main() {
	char s[] = "Hannah";
	reverseString(s, 6);
	printf("%s", s);
	return 0;
}
*/
