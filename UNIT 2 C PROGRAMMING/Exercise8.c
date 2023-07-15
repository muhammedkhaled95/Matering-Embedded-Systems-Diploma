/*
 * File: Exercise8.c
 * Author: Mohamed Khaled
 * Description: simple calcuator program with an operator and 2 operands.
 */
// Lessons learned: don't put any special characters in scanf() as it will be expected as an input.

#include <stdio.h>

int main(){
    char operator;
    float num1, num2;
    float result;
    printf("Enter operator from +, -, *, or / : ");
    scanf("%c", &operator);
    fflush(stdout);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0){
                result = num1 / num2;
            }
            else {
                printf("division is not allowed since the denominator is zero.");
            }
            break;
            
        default:
            printf("Not a valid operator!");
            break;
    }

    if(num2 != 0) {
        printf("%0.1f %c %0.1f = %0.1f", num1, operator, num2, result);
    }
    

    return 0;
}