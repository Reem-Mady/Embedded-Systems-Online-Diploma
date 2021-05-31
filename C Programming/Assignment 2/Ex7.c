#include<stdio.h>
int main(){
	int a;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&a);
	int f=1;
	if(a<0){
		printf("%d is a negative number",a);

	}
	else{
		for(int i=1;i<=a;++i){
			f*=i;
		}
		printf("Factorial is: %d",f);
	}

	fflush(stdout);
}
