//• Write a C Program to Display The Size of Different Data Types
#include<stdio.h>

int main()
{
  int intType;
  float floatType;
  char charType;
  double doubleType;
  printf("size of int %d \n", sizeof(intType));
  printf("size of float %d \n", sizeof(floatType));
  printf("size of char %d \n" , sizeof(charType));
  printf("size of double %d ", sizeof(doubleType));
  return 0;
}
