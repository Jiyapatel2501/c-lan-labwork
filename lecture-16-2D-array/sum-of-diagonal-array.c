#include<stdio.h>
int main(){
	int n,sum;
	printf("Enter tha size of array row and colmn :");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Enter array value :");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}	
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum+=arr[i][j];
			}
		}
	}
	printf("The sum  of diagonal element of array is %d ",sum);
}