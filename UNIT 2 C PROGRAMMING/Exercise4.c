/*
 * File: Exercise.c
 * Author: Mohamed Khaled
 * Description: Program that checks if a number is positive or negative.
 */
#include <stdio.h>
#include <ctype.h>

int main(){
    signed int num;

    printf("Enter a number: ");
    scanf("%d\n", &num);

    if (!isdigit(num)){
        printf("Not a valid number.");
        return 0;
    }
    if (num < 0) {
        printf("%d is negative", num);    
    }
    else if (num == 0) {
        printf("You entered zero");
    }
    else {
        printf("%d is positive", num);
    }

    return 0;
}