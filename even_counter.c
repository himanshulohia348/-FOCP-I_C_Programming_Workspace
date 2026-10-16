//Number of even number in the entered no.
#include<stdio.h>
int countEven(int n) 
{ int count=0;
    for(int i =1;i<=n;++i)
    { if ( i%2==0)
       {printf("%d ",i);
        count++;}
    }
return count;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("\nno. of even no. till %d: %d", n, countEven(n));

    return 0;
}