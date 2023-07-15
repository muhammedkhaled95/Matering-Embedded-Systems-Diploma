/*
 * File: Exercise6.c
 * Author: Mohamed Khaled
 * Description: A user gives a number n and the program outputs sum of 1+2+3+...+n
 */
#include <stdio.h>

int main(){
    int n;
    int i;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%d\n", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
    }

    printf("sum = %d", sum);
    
    return 0;
}