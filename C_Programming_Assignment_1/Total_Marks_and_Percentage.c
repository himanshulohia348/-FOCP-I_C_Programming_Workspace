/*Implement a C program to accept marks obtained in five subjects
 where each subject is out of 100. */
 #include<stdio.h>
 int main(){
float s1,s2,s3,s4,s5;
printf("\nEnter marks obtained in 5 subjects: ");
scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
float tm = s1 + s2 + s3+ s4 + s5;
float per = tm / 5.0;
printf("\nTotal marks: %.1f \nPercentage: %.2f", tm , per);



    return 0;
 }
