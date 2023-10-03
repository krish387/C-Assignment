//• Checking Whether You Are Eligible for Voting or Not
#include<stdio.h>
int main () {
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    if(a>=18)
   {
    printf("You are eligible for voting");
   }
   else
   {
    printf("You are not eligible for voting");
   }
   return 0;
}