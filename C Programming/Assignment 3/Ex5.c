#include<stdio.h>
int main(){
	int n;
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		//fflush(stdout);
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
		fflush(stdout);
	}
	int s;
	printf("\nEnter the element to search: ");
	fflush(stdout);

	scanf("%d",&s);
			int location;
			for(int i=0;i<n;i++){
				if(arr[i]==s){
					location=i+1;
				}

			}

	printf("\nNumber found at the location= %d",location);
}

