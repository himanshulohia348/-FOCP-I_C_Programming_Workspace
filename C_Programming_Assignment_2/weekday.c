/*Take a number from 1 to 7 and use switch: 
1 → Monday 
2 → Tuesday 
... 
7 → Sunday 
Along with the day name, print: 
• Working Day for Monday–Friday  
• Weekend for Saturday–Sunday  
For any other number, print Invalid Day.*/
#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    switch (a)
   { case 1:
    printf("Mon- Working day");
    break;
    case 2:
    printf("Tue- Working day");
    break;
    case 3:
    printf("Wed- Working day");
    break;
    case 4:
    printf("Thu- Working day");
    break;
    case 5:
    printf("Fri- Working day");
    break;
    case 6:
    printf("Sat- Weekend");
    break;
    case 7:
    printf("Sun- Weekend");
    break;
    default:
    printf("Invalid day");

}
    return 0;
}