//• Find the Greatest Among Three Numbers
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is the greatest number");
    }
    else if(b>c && b>a){
        printf("b is the greatest number");
    }
    else{
        printf("c is the greatest number");
    }
    return 0;
}

