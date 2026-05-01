#include<stdio.h>
int main(){
	int n;
	printf("Enter array size :");
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		printf("enter array value :");
		scanf("%d",&a[i]);
	}
	printf("The copy value is :");
	for(int i=0;i<n;i++){
		b[i]=a[i];
		printf("%d ",b[i]);
	}
}