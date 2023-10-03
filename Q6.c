//• C Program to Find Percentage of 5 Subjects
#include<stdio.h>
int main () {
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    float p;
    printf("Enter the marks");
    scanf("%d %d %d %d %d",&sub1,sub2,sub3,sub4,sub5);
     p=( (sub1+sub2+sub3+sub4+sub5)/500)*100 ;
    printf("percentage of 5 subject: %d",p );

    return 0;
}