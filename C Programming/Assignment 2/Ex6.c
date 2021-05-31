#include<stdio.h>
int main(){
	int a;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&a);
	//int count=1;
	int sum=0;
	for(int i=1;i<=a;i++){
		sum+=i;
	}
	printf("Sum is %d",sum);
	fflush(stdout);
}