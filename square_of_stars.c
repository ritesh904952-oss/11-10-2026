#include <stdio.h>

int main()
{
    int i,a, j;
printf("enter the side units of the square:");
scanf("%d",&a);
    for (i = 1; i <= a; i++)
{
    for (j=1 ; j<=a ; j++)
    {
    printf("*");
    }
    printf("\n");
}

    return 0;
}