#include<stdio.h>
void Reverse(){
	char c;
	scanf("%c",&c);
	//fflush(stdout);
	if(c!='\n'){
		Reverse();
		printf("%c",c);
		fflush(stdout);
	}

}
int main(){
	printf("Enter a sentence: ");
	fflush(stdout);
	Reverse();
}

