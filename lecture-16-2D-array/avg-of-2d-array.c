#include<stdio.h>
int main(){
	int n,m,avg,sum,count;
	printf("Enter the size of array row :");
	scanf("%d",&n);
	printf("Enter the size of array colum :");
	scanf("%d",&m);
	int arr[n][m];                                                                               
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Enter array value :");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum+=arr[i][j];
			count++;
		}
	}
	avg=sum/count;
	printf("\nThe average of given array is %d",avg);
	
}