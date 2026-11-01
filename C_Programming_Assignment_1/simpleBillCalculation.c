/*accept price of one item. • Accept the quantity purchased.
 • Calculate and display the total bill.
  Formula: Total Bill = Price × Quantity */
  #include<stdio.h>
  int main(){
    int price;int quantity;
    
printf("Enter the price and quantity:");
scanf("%d%d", &price, &quantity);
int total_bill = price * quantity;
printf("The total bill: %d", total_bill);

    return 0;
  }