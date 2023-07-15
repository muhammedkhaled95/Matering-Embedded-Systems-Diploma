/*
 * File: Exercise2.c
 * Author: Mohamed Khaled
 * Description: program to check if an input character is vowel or consonant.
 */
#include <stdio.h>
#include <ctype.h>

int main(){
    char c;

    printf("Enter an alphabet character: ");
    scanf("%c\n", &c);

    if (!isalpha(c)){
        printf("Invalid input, that's not an alphabet character\n");
        return 0;
    }

    c = tolower(c);

    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.", c);
            break;
        default:
            printf("%c is a consonant.", c);
            break;
    }
    return 0;
}