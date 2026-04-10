#include<stdio.h>
int main(){
	int a=10;
	int b=20;
	printf("values before swapping = %d , %d",a,b);
	a=a+b;//30
	b=a-b;//10
	a=a-b;//20
	
	
	printf("\nvalues after swapping = %d , %d",a,b);
}