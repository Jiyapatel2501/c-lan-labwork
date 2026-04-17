#include<stdio.h>
int main(){
	int s,e;
	printf("Enter the first year :");
	scanf("%d",&s);
	
	printf("Enter the second year :");
	scanf("%d",&e);
	for(s;s<=e;s+=4){
		printf("%d\n",s);
	}
	
	
}
