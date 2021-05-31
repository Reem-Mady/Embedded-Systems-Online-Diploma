#include<stdio.h>
int main(){
	int arr[30];
	int num,a;
	int location;
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d",&a);
	for (int  i= 0; i < a; ++i) {
		arr[i]=i+1;
		printf("%d ",arr[i] );
	}
	printf("Enter the element to be inserted : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Enter the location: ");
	fflush(stdout);
	scanf("%d",&location);
	for(int i=a;i>=location;i--){
		arr[i]=arr[i-1];
	}
	a++;
	arr[location-1]=num;
	for (int var = 0; var < a; ++var) {
		printf("%d ",arr[var] );
	}
}

