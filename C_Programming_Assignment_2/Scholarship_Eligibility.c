/*A student is eligible for a scholarship if: 
• Marks are at least 75  
• Attendance is at least 75%  
However: 
• If marks are 90 or above and attendance is at least 70%, print Special 
Scholarship.  
• Otherwise, if both normal conditions are satisfied, print Eligible.  
• Else print Not Eligible. Example: Input: Marks = 92 Attendance = 72 Output: 
Special Scholarship*/
#include<stdio.h>
int main(){
    int marks, at;
    scanf("%d%d", &marks, &at);
    if(marks>=75){
        if(at >= 75) 
        printf("Eligible");
        else if( marks>=90 && at>=70){
            printf("Special Scholarship");
            

        }else
        printf("Not Eligible");

    }else
    printf("Not Eligible");

    return 0;
}