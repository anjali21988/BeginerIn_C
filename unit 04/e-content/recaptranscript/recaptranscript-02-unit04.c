#include<stdio.h>

int main()
{
    int num;
    printf("enter number:\n");
    scanf("%d\n",&num);
    if(num<0)
    printf("%d is negative:\n",num);
    else
    printf("%d is positive",num);
    return 0;
}