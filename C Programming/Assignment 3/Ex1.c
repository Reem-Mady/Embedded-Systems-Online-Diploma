#include<stdio.h>
int main(){
		printf("Enter the elements of the first matrix:");
		fflush(stdout);
		float arr[2][2];
		float arr2[2][2];
		for(int i=0; i<2;i++){
			for( int j=0;j<2;j++){
				printf("Enter a%d%d: ",i+1,j+1);
				fflush(stdout);
				scanf("%f",&arr[i][j]);
			}
		}

		printf("Enter the elements of the second matrix:");
		fflush(stdout);
		for(int i=0; i<2;i++){
			for( int j=0;j<2;j++){
				printf("Enter a%d%d: ",i+1,j+1);
				fflush(stdout);
				scanf("%f",&arr2[i][j]);
			}
		}
		printf("Sum is:");
		fflush(stdout);
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				printf("%f ",arr[i][j]+arr2[i][j]);
			}
			printf("\n");
		}
}
