/*
 * File: Exercise3.c
 * Author: Mohamed Khaled
 * Description: Program to find the largest number between 3 numbers.
 */
#include <stdio.h>

int main(){
    
    signed int input_nums[3];
    int arr_length = sizeof(input_nums) / sizeof(input_nums[0]);
    int i;
    int max = 0;
    
    printf("Enter 3 numbers to get the largest of them:\n");
    for(i = 0; i < arr_length; i++) {
        scanf("%d\n", &input_nums[i]);
    }

    for(i = 0; i < arr_length; i++) {
        if(input_nums[i] > max) {
            max = input_nums[i];
        }
    }

    printf("Largest number = %d", max);

    return 0;
}