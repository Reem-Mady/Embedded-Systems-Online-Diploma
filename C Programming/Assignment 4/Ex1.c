#include<stdio.h>
int PrimeNum (int x){
	int flag=0;
	for (int i = 2;i<x/2;i++){
		if(x%i==0 ){
			flag=1;
		}

	}
	return flag;
}
int main(){
	int x,y,flag;
	printf("Enter two numbers(intervals):");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	for(int i=x+1;i<y;i++){
		flag=PrimeNum(i);
		if(flag==0){
			printf("%d ",i);
		}
	}
}
