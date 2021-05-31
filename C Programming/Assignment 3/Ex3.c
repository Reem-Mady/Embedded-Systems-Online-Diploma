#include<stdio.h>
int main(){
	int r,c;
	printf("Enter rows and coloumn of matrix: ");
	fflush(stdout);
	scanf("%d %d",&r,&c);
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("Enter element a%d%d",i+1,j+1);
			fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d  ",arr[i][j]);
			fflush(stdout);
		}
		printf("\n");
		fflush(stdout);
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			printf("%d  ",arr[j][i]);
			fflush(stdout);
		}
		printf("\n");
		fflush(stdout);
	}


}

