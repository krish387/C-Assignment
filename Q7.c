//• Convert Temperature Celsius into Fahrenheit
#include <stdio.h>
int main()
{
  int c,far;
  printf("enter the temp in celsius");
  scanf("%d",&c);
  far= (c*9/5)+32;
  printf("temperature in fahrenheit= %d",far);
  return 0;
}
