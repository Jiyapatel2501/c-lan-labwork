#include<stdio.h>
int main(){
	int arr[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("Enter array value :");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if((i==1&&(j==1||j==2||j==3))||(i==2&&(j==1||j==2||j==3))||(i==3&&(j==1||j==2||j==3))){
				printf("  ");
			}else{
				printf("%d ",arr[i][j]);
			}
		}
		printf("\n");
	}
}