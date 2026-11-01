/*Implement a C program to accept two integers
 calculate: • Quotient • Remainder */
 #include<stdio.h>
 int main(){
int a,b;
printf("Enter two integer: ");
scanf("%d%d", &a, &b);
printf("Input mubers: %d and %d\n", a,b );
int q = a / b;
int r = a % b;
printf("Quotient: %d \nRemainder: %d", q,r);

    return 0;
        }