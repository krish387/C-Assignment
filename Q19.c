//• Check Character Is a Vowel or Not Using If-Else
#include<stdio.h>
int main()
{
  char ch;
  printf("enter the character");
  scanf("%c",&ch);
  if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
      printf("its a vowel");
  }
  else if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U' ){
      printf("its a vowel");
  }
  else{
      printf("its not vowel");
  }
  return 0;
}
