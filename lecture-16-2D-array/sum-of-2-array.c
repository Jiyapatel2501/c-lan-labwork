#include<stdio.h>
int main(){
	int n,m;
	printf("Enter the size of array row :");
	scanf("%d",&n);
	printf("Enter the size of array column :");
	scanf("%d",&m);
	int a[n][m],b[n][m],c[n][m];
	//a array value insert
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Enter the array value :");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	//b array value insert
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Enter the value of second array :");
			scanf("%d",&b[i][j]);
		}
		printf("\n");	
	}
	//a array value display
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//b array value display
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	//sum of 2 array
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
		printf("\n");
	}
	//display array c
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){l
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
}