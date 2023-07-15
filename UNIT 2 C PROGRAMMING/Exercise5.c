/*
 * File: Exercise5.c
 * Author: Mohamed Khaled
 * Description: Program that checks if a character is in the alphabet.
 */
// Another solution would be to use isalpha() function from ctype.h library and give the char as an argument.

#include <stdio.h>

int main(){
    char c;

    printf("Enter a character: ");
    scanf("%c",&c);

    int char_ascii = (int)c;
    if((char_ascii >= 97 && char_ascii <=122) || (char_ascii >= 65 && char_ascii <= 90)) {
        printf("%c is an alphabet character", c);
    } 
    else {
        printf("%c is not an alphabet character",c);
    }
    
    return 0;
}