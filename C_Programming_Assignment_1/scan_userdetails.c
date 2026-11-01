//Age • Height (in meters) • Grade (single character) 
#include<stdio.h>
int main(){
    int age; float height; char grade;
    printf("Enter your age height and grade:");
    scanf("%d%f%c", &age, &height, &grade);
    printf("\nAge: %d \nHeight(in meters): %.2f \nGrade: %c", age, height, grade); 





    return 0;
}