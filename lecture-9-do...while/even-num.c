#include<stdio.h>
int main(){
	int i=2,end;
	printf("Enter any number :");
	scanf("%d",&end);
	do{
		if(i%2==0){
			printf("%d\n",i);
		}
		i++;
	}while(i<=end);
	
}