#include<stdio.h>
int main(){
	int a,sum=0;
	printf("Enter any number :");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		sum +=i;
	}
	printf("Sum is : %d",sum);
	
}