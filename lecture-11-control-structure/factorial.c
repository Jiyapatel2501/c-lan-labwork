#include<stdio.h>
int main(){
	int a,fac=1;
	printf("Enter number to find fectorial :");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		fac*=i;
	}
	printf("The factorial is : %d",fac);
}