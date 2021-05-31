#include<stdio.h>

int main(){
	float a,b,c;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("Largest number is: %f",a);
			fflush(stdout);
		}
		else{
			printf("Largest number is: %f",c);
			fflush(stdout);
		}
	}
		if(b>a){
    		if(b>c){
				printf("Largest number is: %f",b);
				fflush(stdout);
			}
			else{
				printf("Largest number is: %f",c);
				fflush(stdout);
			}
	}

}