#include<stdio.h>
int main(){
	int n;
	printf("Enter the numbers of data: ");
	fflush(stdout);
	scanf("%d",&n);
	float arr[n];
	float sum=0;
	for(int i=0;i<n;i++){
		printf("%d.Enter number:  ",i+1);
		fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	printf("Average = %f",sum/n);




}

