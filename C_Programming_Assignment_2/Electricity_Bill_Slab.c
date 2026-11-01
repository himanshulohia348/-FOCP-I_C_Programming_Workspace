/*Implement a program to calculate the electricity bill based on units consumed: 
Units 
0–100 Rate ₹2/unit ₹3/unit ₹5/unit
101–200 
Above 200 
Use if-else ladder. 
Example: 
Input: 250 
Output: 850*/
#include<stdio.h>
int main(){
    int units;
    scanf("%d", &units);
    int bill;
    if (units<= 100)
    {bill = units*2;
    printf("\n%d", bill);
}
    else if (units<= 200)
    {bill = (100*2) + (units-100)*3;
    printf("\n%d", bill);}
    else
    {bill =(100*2) + (100*3) + (units- 200)*5 ;
    printf("\n%d", bill);}



    return 0;
}