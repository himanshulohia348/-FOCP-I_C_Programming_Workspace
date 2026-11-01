//Calculate Average of Three Numbers
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three no. : ");
scanf("%d%d%d", &a, &b,&c);
float avg = (a+b+c) / 3.0;
printf("\nThe average of three no. is: %.1f", avg);



    return 0;
}