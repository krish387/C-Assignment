//• Calculate a Simple Interest
#include <stdio.h>

int main()
{
   int p,r,t,si;
   printf("enter principal value");
   scanf("%d",&p);
   printf("enter rate");
   scanf("%d",&r);
   printf("enter time");
   scanf("%d",&t);
   si= p*r*t;
   printf("simple intrest = %d",si);
   return 0;
   
}

