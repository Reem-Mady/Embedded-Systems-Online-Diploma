#include<stdio.h>
int main(){
	float a;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&a);
	if(a>0){
		printf("%f is a positive.",a);
		fflush(stdout);

	}
	else if(a<0){
		printf("%f is a negative.",a);
		fflush(stdout);
	}
	else{
		printf("you entered a zero.");
		fflush(stdout);
	}
}