#include <stdio.h>
#include "arraylib.h"

int findMaxIndex(int arr[], int size){		//To find index of largest value.
	int max = 0;
	for (int i = 1; i < size; i++){
		if (arr[i] > arr[max]){
			max = i;
		}
	}
	printf("%d",max);
}

int findMinIndex(int arr[], int size){		//To find index of largest value.
	int min = 0;
	for (int i = 1; i < size; i++){
		if (arr[i] < arr[min]){
			min = i;
		}
	}
	printf("%d",min);
}

float findAverage(int arr[], int size){		//To find average of all values.
	float sum = 0;
	float avg;
	for (int i = 0; i < size; i++){
		sum += arr[i];
	} 
	avg=sum/size;
	printf("%.2f",avg);
}

void displayArray(int arr[], int size){		//To display the array.
	for (int i = 0; i < size; i++){
		printf("%d ",arr[i]);
	} 
	printf("\n");
}

void reverseArray(int arr[], int size){		//To reverse the array.
	for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    for (int j = 0; j < size; j++){
		printf("%d ",arr[j]);
	} 
}

void sortArray(int arr[], int size){		//To sort an array in ascending order..
	for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int j = 0; j < size; j++){
		printf("%d ",arr[j]);
	} 
}

int linearSearch(int arr[], int size, int value){		//To find the index of a certain value.
	scanf("%d",&value);
	for (int i = 0; i < size; i++)
        if (arr[i] == value){
        	printf("%d",i);
    	}
}

 
