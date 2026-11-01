/*Implement a C program to accept two integer values 
and swap their values using a third variable.
Display the values: • Before swapping • After swapping */ 
#include<stdio.h>
int main(){
int a,b;
printf("Enter two integers: ");
scanf("%d%d", &a, &b);
printf("Before swapping; %d %d\n", a, b);
int c;
c = a; a = b; b = c;
printf("After swapping; %d %d", a, b);



    return 0;
}