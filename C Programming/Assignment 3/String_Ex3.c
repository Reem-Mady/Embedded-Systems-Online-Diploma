#include<stdio.h>
int main() {
	char c[1000];
	printf("Enter a string: ");
	fflush(stdout);
	gets(c);
	int count = 0;
	for (int i = 0; c[i] != 0; i++) {
		count++;
	}
	for (int i = count; i >= 0; i--) {
		printf("%c", c[i]);
		fflush(stdout);
	}

}
