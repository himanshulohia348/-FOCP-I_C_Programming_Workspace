/*Implement a C program that takes an integer n. 
• If n is divisible by both 2 and 5, print Special.  
• If it is divisible only by 2, print Even.  
• If it is divisible only by 5, print Five.  
• Otherwise, print Odd/Other.*/
#include<stdio.h>
int main()
{int a;
    scanf("%d", &a);
    if (a%2==0 && a%5==0)
    printf("Speacial");
    else if (a%2==0)
    printf("Even");
    else if (a%5==0)
    printf("Five");
    else
    printf("Odd");



    return 0;
}