#include<stdio.h>

int main(){
	
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<=n-1;i++){
		printf("Enter the value :");
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		if(i==n){
			printf("The size of array is %d",i);
		}
	}
}