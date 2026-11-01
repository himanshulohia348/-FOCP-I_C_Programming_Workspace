/*10. Rock-Paper-Scissors using switch 
Two players enter: 
1 → Rock 
2 → Paper 
3 → Scissors 
Implement a C program using switch and if-else to determine: 
• Player 1 Wins  
• Player 2 Wins  
• Draw  
• Invalid Input if either player enters anything other than 1, 2, or 3.  
Example: 
Input: 
1 3 
Output: 
Player 1 Wins*/
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    switch(a)
    {case 1:
        if (b ==1)
        printf("Draw");
        else if (b==2)
        printf("player 2 wins");
        else if (b ==3)
        printf("player 1 wims");
        else 
        printf("Invalid choice");
        break;
        case 2:
        if (b ==2)
        printf("Draw");
        else if (b==3)
        printf("player 2 wins");
        else if (b ==1)
        printf("player 1 wims");
         else 
        printf("Invalid choice");
        break;
        case 3:
        if (b ==3)
        printf("Draw");
        else if (b==1)
        printf("player 2 wins");
        else if (b ==2)
        printf("player 1 wims");
         else 
        printf("Invalid choice");
        break;
        default:
        printf("Invalid");

    }


    return 0;
}