//find minimum of 3
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the first value :");
	scanf("%d",&a);
	printf("enter the second value :");
	scanf("%d",&b);
	printf("Enter the third value :");
	scanf("%d",&c);
	if(a<=b){
		//a is min
		if(a<=c){
			//a is min
			printf("%d is minimum",a);
		}else{
			//c is min
			printf("%d is minimum",c);
		}
	}else{
		//b is min
		if(b<=c){
			//b is min
			printf("%d is minimum",b);
		}else{
			//c is min
			printf("%d is minimum",c);                                                                                                                                                                                                     
		}
	}
	
}