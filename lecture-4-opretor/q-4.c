#include<stdio.h>
int main(){
	int a=10;
	int b=20;
	int c;
	printf("values before swapping = %d , %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nvalues after swapping = %d , %d",a,b);
}