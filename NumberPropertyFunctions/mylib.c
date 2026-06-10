#include <stdio.h>
#include "mylib.h"
int isRev(int reverse) {		//to find reverse of a number
    int rev = 0;
    while (reverse > 0) {
        rev = rev * 10 + (reverse % 10);
        reverse /= 10;
    }
    return rev;

}

int isPrime(int prime) {		//to check if a number is prime or not
	int val = 1;
	if (prime <= 1){
		val = 0;
	} else if (prime == 2){
		val = 1;
	} else {
		for (int i = 2; i < prime; i++){
			if(prime % i == 0){
				val = 0;
			} 
		}
	}
	return val;
}

int isArmstrong(int arm) {		//to check if the number is armstrong or not
	int temp = arm;
	int count = 0, sum = 0, npow, remainder;
	while (temp != 0){
		temp /= 10;
		count++;
	}
	temp = arm;
	while (temp != 0){
		remainder = temp % 10;
		npow = 1;
		for (int j = 0; j < count; j++){
			npow = npow * remainder;
		}
		sum = sum + npow;
		temp /= 10;
	}
	if (sum == arm){
		printf("Armstrong.");
	} else {
		printf("Not Armstrong.");
	}
}

int isAdams(int adams) {		//to check if the number is adams number or not
	int adamsrev = isRev(adams);
	if(adams * adams == isRev(adamsrev * adamsrev)){
		printf("Adam's number.");
	} else {
		printf("Not Adam's number.");
	}
}

int isPrimePalindrome(int palin) {		//to check if the number is both prime & palindrome or not
	if (palin == isRev(palin)){
		if (isPrime(palin) == 1){
			printf("Prime Palindrome.");
		} else if (isPrime(palin) == 0){
			printf("Not Prime Palindrome.");
		}
	} else {
		printf("Not Prime Palindrome");
	}
}
