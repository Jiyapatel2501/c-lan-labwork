#include<stdio.h>
int main(){
	int a,b,c;
	float total;
	printf("Enter the marks of first subject :");
	scanf("%d",&a);
	printf("Enter the marks of second subject :");
	scanf("%d",&b);
	printf("Enter the marks of third subject :");
	scanf("%d",&c);
	if(a<=100 && b<=100 && c<=100){
		total=(a+b+c)/3;
		printf("your average marks is %f",total);
	}
	else{
		printf("Invalid marks");
	}
}