/*An employee's monthly salary consists of:
 • Basic Salary • Allowance • Bonus Implement a C program to accept these values and calculate the final salary. 
 Formula: Final Salary = Basic Salary + Allowance + Bonus */
 #include<stdio.h>
 int main(){
float bs, alw, bonus;
printf("\nEnter basic salary allowance and bonus: ");
scanf("%f%f%f", &bs, &alw, &bonus);
float fs = bs + alw + bonus;
printf("\nFinal Salary: %.2f", fs);


    return 0;
 }