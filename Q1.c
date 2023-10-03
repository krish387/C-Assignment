//• C Program to Find Area and Circumference of Circle
#include<stdio.h>
int main () {
    int r;
    float pi=3.14,A,C;
    printf("Enter the radius : ");
    scanf("%d",&r);
    A=pi*r*r;
    printf("The area of circle is : %f \n",A);
    C=2*pi*r;
    printf("The circumference of circle is : %f ",C);
    
    return 0;

}