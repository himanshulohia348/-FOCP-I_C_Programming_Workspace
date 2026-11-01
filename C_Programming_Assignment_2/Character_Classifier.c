/*Implement a program that takes a character and prints: 
• Vowel if it is a, e, i, o, u (uppercase or lowercase)  
• Digit if it is 0–9  
• Consonant if it is an English alphabet but not a vowel  
• Special Character otherwise  
Hint: Use logical operators and/or switch.*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
printf("Vowel");
        break;

    
    default:
        if(ch >= '0' && ch <= '9')
        printf("Digit");
        else if((ch >= 'a'&& ch <='z')||(ch >= 'A'&& ch <='Z') )
        printf("Consonant");
        else
        printf("Special character");

        break;
    }

    return 0;
}