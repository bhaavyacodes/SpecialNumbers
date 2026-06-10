#include<stdio.h>
#include "arraylib.h"
#include "arraylib.c"

int main () {	

	int size, value, choice;	//intializing variables
	
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter %d elements of the array:\n",size);
	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}

	do {
		printf("\n========== MENU ==========\n");
		printf("1. Index of Maximum Value\n");
		printf("2. Index of Minimum Value\n");
		printf("3. Find Average of Values\n");
		printf("4. Display Array\n");
		printf("5. Reserve Array\n");
		printf("6. Sort Array\n");
		printf("7. Search Index of a Value\n");
		printf("8. Exit\n");
		printf("==========================\n");
	
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		if (choice == 8) {
			printf("Exiting program. Goodbye!\n");
			break;	
		}
	
		switch (choice) {
			case 1:
				printf("Index of Maximum Value is ");
				findMaxIndex(arr,size);
				break;
			case 2:
				printf("Index of Minimum Value is ");
				findMinIndex(arr,size);
				break;
			case 3:
				printf("Average of the Values is ");
				findAverage(arr,size);
				break;
			case 4:
				printf("The Array is ");
				displayArray(arr,size);
				break;
			case 5:
				printf("Reversed Array is ");
				reverseArray(arr,size);
				break;
			case 6:
				printf("Sorted Array is ");
				sortArray(arr,size);
				break;
			case 7:
				printf("Index of the Value: ");
				linearSearch(arr,size,value);
				break;
			default:
				printf("Invalid choice! Please select between 1 to 8. \n");
		}
	} 
	while (choice != 8);
}
