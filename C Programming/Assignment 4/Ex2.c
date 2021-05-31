#include<stdio.h>
int factorial(int n){
	if(n>=1){
		return n*factorial(n-1);

	}
	else
		return 1;
}
int main(){
	int num;
	printf("Enter an positive integer: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Factorial of %d %d",num,factorial(num));
}

