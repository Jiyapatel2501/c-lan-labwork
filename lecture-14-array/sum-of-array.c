#include<stdio.h>
int main(){
	
	int n,sum,avg;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter array value :");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		sum+=a[i];
		avg=sum/n;
	}
	printf("The sum of array element is %d.",avg);
}