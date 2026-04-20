#include<stdio.h>
int main(){
	int a,m;
	printf("Enter number for table :");
	scanf("%d",&a);
	for(int i=1;i<=10;i++){
		m=a*i;
		printf("%d X %d =%d\n",a,i,m);
	}
	
}