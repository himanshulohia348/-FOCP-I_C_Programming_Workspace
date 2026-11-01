/*Implement a C program to accept the temperature in Celsius and convert it into Fahrenheit.
 Formula: Fahrenheit = (Celsius × 9 / 5) + 32 */
 #include<stdio.h>
 int main(){
    float cel;
    printf("\nEnter temperature in celsius: ");
    scanf("%f", &cel);
    printf("\nTemperature in celsius: %.1f", cel);
    float f =  (cel * 9 / 5) + 32 ;
    printf("\nTemperature in Fahrenheit: %.1f", f);

    return 0;
 }