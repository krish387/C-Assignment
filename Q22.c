//• C Program to Reverse a Number Using FOR Loop
#include <stdio.h>
void main()
{
  int rev=0,rem=0,num;
  printf("enter the number");
  scanf("%d",&num);
  for(;num>0;num=num/10)
  {
      rem=num%10;
      rev=(rev*10)+rem;
  }
  printf("%d reverse of the number",rev);
  return 0;
}

