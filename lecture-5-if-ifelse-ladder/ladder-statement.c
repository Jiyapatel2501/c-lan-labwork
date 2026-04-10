#include<stdio.h>
int main(){
	float a;
	printf("Enter any value :");
	scanf("%f",&a);
	if (a<0){
		printf("This number is negetive");
	}
	else if(a==0){
		printf("This number is nuetral");
	}
	else{
		printf("This number is positive");
	}
}