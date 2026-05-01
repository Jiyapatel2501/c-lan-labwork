#include<stdio.h>
int main(){
	int n,sum=0;
	printf("Enter array size :");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter array value :");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("The sum of array element is %d",sum);
}