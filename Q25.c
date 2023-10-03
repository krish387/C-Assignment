//• Write a C Program to Print the Multiplication Table of N
#include <stdio.h>
int main() {
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);

  for (int i = 1; i <= 10; ++i) {
    printf("%d \n", n * i);
  }
  return 0;
}