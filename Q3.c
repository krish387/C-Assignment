//• C Program to Find Area of Triangle Given Base and Height

#include<stdio.h>
int main () 
{
    float A,B,H;
    printf("Enter the value of B :");
    scanf("%f",&B);

    printf("Enter the value of H :");
    scanf("%f",&H);

    A=(B*H)/2;
    printf("Area of Triangle is %.2f", A);
    
} 