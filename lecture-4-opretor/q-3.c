
#include<stdio.h>
int main(){
	int a,b,ans;
	printf("Enter the value of a :-");
	scanf("%d",&a);
	printf("\nEnter the value of b :-");
	scanf("%d",&b);
	ans=(a*a*a)+(3*a*a*a)+(3*a*b*b)+(b*b*b);
	printf("\nAnswer is %d",ans);
	
}