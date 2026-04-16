#include<stdio.h>
int main(){
	int i=1,end;
	printf("Enter any odd number :");
	scanf("%d",&end);
	while(end>=i){
		printf("%d\n",end);
		end-=2;
	}
	
}