#include<stdio.h>
int main(){
int a,b;
printf("\nEnter two no : ");
scanf("%d%d", &a,&b);

char choice;
printf("\nEnter your choice: ");
scanf(" %c", &choice);
switch (choice)
{
case '+':
printf("sum = %d", a+b);
break;
case '-':
printf("diff = %d", a-b);
break;
case '*':
printf("product= %d", a*b);
break;
case '/':
printf("div = %d", a/b);
break;
case '%':
printf("remainder = %d", a%b);
break;
default:
printf("Invalid choice");

}
return 0;
}