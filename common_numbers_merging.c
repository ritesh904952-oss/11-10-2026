#include <stdio.h>

int main() {
int a,b,c,d,e;
    printf("enter the number a:");
    scanf("%d",&a);
      printf("enter the number b:");
    scanf("%d",&b);
      printf("enter the number c:");
    scanf("%d",&c);

    if (a==b && b==c ) {
        printf("%d",a);
    }
    else if (a==b&& b!=c)
    {
        printf("%d,%d",a,c);
    }
    else if (a!=b && a==c ){
        printf("%d,%d",a,b);
    }
    else if (a!=b && b==c) {
        printf("%d,%d",a,b);
    }else 
        printf("%d,%d,%d",a,b,c);
    return 0;
}