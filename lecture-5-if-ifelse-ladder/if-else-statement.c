#include<stdio.h>
int main(){
	
	float a,b;
	printf("Enter the value of first number :-");
	scanf("%f",&a);
	printf("Enter the value of second number :-");
	scanf("%f",&b);
	if(a>b){
		printf("%f is minimum",b);
	}
	else{
		printf("%f is minimum",a);
	}
	
}