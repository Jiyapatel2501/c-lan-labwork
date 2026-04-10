// max of  4
#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter the first value :");
	scanf("%d",&a);
	printf("Enter the second value :");
	scanf("%d",&b);
	printf("Enter the third value :");
	scanf("%d",&c);
	printf("enter the fourth value :");
	scanf("%d",&d);
	if(a>=b){
		//a is max
		if(a>=c){
			//a is max
			if(a>=d){
				//a is max
				printf("%d is max",a);
			}else{
				//d is max
				printf("%d is max",d);
			}
		}else{
			//c is max
			if(c>=d){
				//c is max
				printf("%d is max",c);
			}else{
				//d is max
				printf("%d is max",d);
			}
		}
	}else{
		//b is max
		if(b>=c){
			//b is max
			if(b>=d){
				//b is max
				printf("%d is max",b);
			}else{
				//d is max
				printf("%d is max",d);
			}
		}else{
			//c is max
			if(c>=d){
				//c is max
				printf("%d is max",c);
			}else{
				//d is max
				printf("%d is max",d);
			}
		}
	}
	
	
	
}