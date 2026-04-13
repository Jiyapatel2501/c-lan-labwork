#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("Enter the third number :");
	scanf("%d",&c);
	(a<=b)
	//true statement
	?(a<=c)
		?printf("%d is min",a)
		:printf("%d is min",c)
	//false statement
	:(b<=c)
		?printf("%d is min",b)
		:printf("%d is min",c);
	
	
}