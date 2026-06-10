#include<stdio.h>
#include "mylib.h"
#include "mylib.c"

int main () {
	
	int choice, num;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	do {
		printf("\n============= MENU =============\n");
		printf("1. Check Armstrong Number\n");
		printf("2. Check Adams Number\n");
		printf("3. Check Prime Palindrome Number\n");
		printf("4. Exit\n");
		printf("================================\n");
		
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		if (choice == 4) {
			printf("Exiting program. Goodbye!\n");
			break;
		}
		
		switch (choice) {
			case 1:
				printf("%s",isArmstrong(num));
				break;
			case 2:				
				printf("%s",isAdams(num));
				break;
			case 3:				
				printf("%s",isPrimePalindrome(num));
				break;
			default:
				printf("Invalid choice! Please select between 1 to 4. \n");
		}
	} 
	while (choice != 4);
}
