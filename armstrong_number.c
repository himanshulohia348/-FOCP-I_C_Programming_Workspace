/* 3-digit armstrong number checker 
example 153 370*/

#include<stdio.h>
int isArmstrong(int n){
int sum=0, original=n;
while(n>0)
{int digit= n%10;
    sum= sum +(digit*digit*digit);
    n/=10;

}
return original== sum;
}
       
int main(){
    int n;
    scanf("%d",&n);
    printf("%d", isArmstrong(n));

    return 0;
}