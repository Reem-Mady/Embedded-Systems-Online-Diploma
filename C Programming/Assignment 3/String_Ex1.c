#include<stdio.h>
int main(){
	char c[1000],ch;
	printf("Enter a string: ");
	fflush(stdout);
	gets(c);
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c",&ch);
	int count=0;
	for(int i=0;i<c[i]!=0;i++){
		if(c[i]==ch){
			count++;
		}
	}
	printf("Frequency of %c is %d",ch,count);
}

