/*A company wants to generate a simple invoice for a customer.
 Implement a C program to accept: • Product ID • Product Price • Quantity • Discount Percentage 
 Calculate the following: Subtotal = Price × Quantity 
Discount Amount = Subtotal × Discount Percentage / 100
 Final Amount = Subtotal − Discount Amount 
 Display the following details in a properly formatted manner:
  Product ID Subtotal Discount Amount Final Payable Amount */
  #include<stdio.h>
  int main(){
    int qty,id;
    float per, price;
    printf("\nEnter Product ID Price Quantity and discount percentage: ");
    scanf("%d%f%d%f", &id, &price, &qty, &per);
    float Subtotal = price * qty;
    float disamount = Subtotal * per / 100;
    float FinalAmount = Subtotal - disamount;
    printf("\nProduct ID: %d \nSubtotal: %.2f \nDiscount amount: %.2f \nFinal amount: %.2f", id, Subtotal, disamount, FinalAmount);


    return 0;
  }