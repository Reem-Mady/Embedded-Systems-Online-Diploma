#include<stdio.h>
int main(){
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
			c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
		printf("%c is a vowel",c);
		fflush(stdout);
	}
	else {
		printf("%c is a constant",c);
	fflush(stdout);

	}
}