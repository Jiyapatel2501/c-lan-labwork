#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("Enter value for a :");
	scanf("%d",&a);
	printf("Enter value for b :");
	scanf("%d",&b);
	printf("Enter value for c :");
	scanf("%d",&c);
	printf("Enter value for d :");
	scanf("%d",&d);
	printf("Enter value for e :");
	scanf("%d",&e);
	if(a>=b){
		//a is max
		if(a>=c){
			//a is max
			if(a>=d){
				//a is max
				if(a>=e){
					//a is max
					printf("%d is max",a);
				}else{
					//e is max
					printf("%d is max",e);
				}
			}else{
				//d is max
				if(d>=e){
					//d is max
					printf("%d is max",d);
				}else{
					//e is max
					printf("%d is max",e);
				}
			}
		}else{
			//c is max
			if(c>=d){
				//c is max
				if(c>=e){
					//c is max
					printf("%d is max",c);
				}else{
					//e is max
					printf("%d is max",e);
				}
			}else{
				//d is max
				if(d>=e){
					//d is max
					printf("%d is max",d);
				}else{
					//e is max
					printf("%d is max",e);
				}
			}
		}
		
	}else{
		//b is max
		if(b>=c){
			// b is max
			if(b>=d){
				//b is max
				if(b>=e){
					printf("%d is max",b);
				}else{
					printf("%d is max",e);
				}
			}else{
				//d is max
				if(d>=e){
					printf("%d is max",d);
				}else{
					printf("%d is max",e);
				}
			}
		}else{
			//c is max
			if(c>=d){
				//c is max
				if(c>=e){
					printf("%d is max",c);
				}else{
					printf("%d is max",e);
				}
			}else{
				//d is max
				if(d>=e){
					printf("%d is max",d);
				}else{
					printf("%d is max",e);
				}
			}
		}
		
	}
}