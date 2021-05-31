#include<stdio.h>
int main(){
	char op;
	float a,b;
	printf("Enter the operator either + or - or * or / :");
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&a,&b);
	if(op=='+'){

		printf("%f %c %f= %f",a,op,b,a+b);
	}
	else if(op=='-'){

		printf("%f %c %f= %f",a,op,b,a-b);
	}
	else if(op=='*'){

		printf("%f %c %f= %f",a,op,b,a*b);
	}
	else if(op=='/'){

		printf("%f %c %f= %f",a,op,b,a/b);
	}
}
