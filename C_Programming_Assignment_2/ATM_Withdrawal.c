/*An ATM allows withdrawal only when: 
• PIN is correct (1234)  
• Amount is a multiple of 100  
• Amount is less than or equal to balance  
• Amount is greater than 0  
Given pin, amount, and balance, print: 
• Invalid PIN  
• Invalid Amount  
• Insufficient Balance  
• Withdrawal Successful  
Implement the program using nested if. */
#include<stdio.h>
int main(){
    int pin, amount, balance;
    scanf("%d%d%d",&pin, &amount, &balance);
    if (pin==1234){
        if (amount%100 ==0){
            if (amount <= balance){
                if (amount>0)
                printf("Withdrawal successful");
                else
                printf("Invalid Amount");

            }
            else
            printf("Insufficient Balance");

        }
        else
        printf("Invalid amount"); }
    else
    printf("Invalid pin");

    return 0;
}