#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter array value :");
		scanf("%d",&arr[i]);
		
	}
	printf("The element of array is :");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}