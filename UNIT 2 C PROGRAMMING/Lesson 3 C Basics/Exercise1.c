/*
 * File: Exercise1.c
 * Author: Mohamed Khaled
 * Description: Write a C program that checks if an input number is even or odd.
 */
#include <stdio.h>

int main(){
    int number;
    
    printf("Enter an integer you want to check:\n");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("%d is even", number);
    }
    else {
        printf("%d is odd", number);
    }

    return 0;
}