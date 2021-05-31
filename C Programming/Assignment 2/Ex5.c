#include<stdio.h>
int main() {
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);
	int int_c = (int)'c';
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		printf("%c is Alphabet", c);
		fflush(stdout);
	}
	else if (c >= '0' && c <= '9') {
		printf("%c is a number", c);
		fflush(stdout);
	}
	else {
		printf("%c is a symbol", c);
		fflush(stdout);
	}
}