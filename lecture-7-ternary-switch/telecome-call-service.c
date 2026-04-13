#include<stdio.h>
int main(){
	int choice,choice_2;
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n");
	printf("Enter your choice :");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter 1 for Internet Recharge \n");
			printf("Enter 2 for Top-Up Recharge\n");
			printf("Enter 3 for Special Recharge\n");
			printf("Enter your choice :");
			scanf("%d",&choice_2);
			switch(choice_2){
				case 1:
					printf("You have successfully done Internet Recharge...");
					break;
				case 2:
					printf("You have successfully done Top-Up Recharge...");
					break;
				case 3:
					printf("You have successfully done Special Recharge");
					break;
				default:
					printf("Invalid choice...");
					break;
			}
			break;
		case 2:
			printf("Internet Recharge ke liye 1 dabaye\n");
			printf("Top-Up Recharge ke liye 2 dabaye\n");
			printf("Special Recharge ke liye 3 dabaye\n");
			printf("Aapki pasand likhiye :");
			scanf("%d",&choice_2);
			switch(choice_2){
				case 1:
					printf("Apne Safaltapurvak Internet Recharge kar liya hai...");
					break;
				case 2:
					printf("Apne Safaltapurvak Top-Up Recharge kar liya hai...");
					break;
				case 3:
					printf("Apne Safaltapurvak Spacial Recharge kar liya hai...");
					break;
				default:
					printf("Amanya pasand...");
					break;
			}
			break;
		case 3:
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-Up Recharge mate 2 dabavo\n");
			printf("special Recharge mate 3 dabavo\n");
			printf("Tamari pasand lakho :");
			scanf("%d",&choice_2);
			switch(choice_2){
				case 1:
					printf("Tame Safaltapurvak Internet Recharge karyu chhe... ");
					break;
				case 2:
					printf("Tame Safaltapurvak Top-Up Recharge karyu chhe... ");
					break;
				case 3:
					printf("Tame Safaltapurvak Special Recharge karyu chhe... ");
					break;
				default:
					printf("Amanya pasand...");
					break;
			}
			break;
		default:
			printf("Invalid choice");
			break;
			
	}
	
	
}