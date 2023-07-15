/*
 * File: Exercise7.c
 * Author: Mohamed Khaled
 * Description: program to find the factorial of a number.
 */
#include <stdio.h>

int main(){

    int num;
    int i;
    // Lesson to learn: we have to initialize factorial here cause if we don't, it will get a value that we
    // don't want which in return will mess up our output value as we are not overwritting that unknown
    // initial value, we are building over it, unlike the (int i) variable as it will be completely overwritten
    // down there in the beginning of the for loop.
    int factorial = 1;

    printf("Enter a integer: ");
    scanf("%d\n", &num);

    if(num == 0) {
        printf("Factorial of 0 = 1");
        return 0;
    }

    if (num < 0) {
        printf("ERROR!!! Factorial of negative numbers doesn't exist.");
        return 0;
    }

    for (i = num; i > 0; i--) {
        factorial *= i;
    }

    printf("Factorial = %d", factorial);

    return 0;
}