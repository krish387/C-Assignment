//• Leap Year Program in C with Logic, Explanation and Output
#include <stdio.h>

int main()
{
    int year;
    printf("ENTER A YEAR");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("its a leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}
