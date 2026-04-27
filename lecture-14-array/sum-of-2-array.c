#include<stdio.h>
int main(){
	
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n],b[n],sum[n];
	for(int i=0;i<n;i++){
		printf("Enter the value of first array :");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("Enter the value of second array :");
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++){
		sum[i]=a[i]+b[i];
	}
	for(int i=0;i<n;i++){
		printf("%d\t",sum[i]);
	}
}