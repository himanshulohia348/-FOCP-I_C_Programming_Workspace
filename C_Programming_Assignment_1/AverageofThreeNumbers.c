//Calculate Average of Two Numbers
#include<stdio.h>
int main(){
int a,b;
printf("Enter two no. : ");
scanf("%d%d", &a, &b);
float avg = (a+b) / 2.0;
printf("\nThe average of two no. is: %.1f", avg);



    return 0;
}