//program to display a number if it is negative
#include<stdio.h>
int main()
{
    int value;
    printf("enter a value:\n");
    scanf("%d\n",&value);
    if(value<0)
    {
        printf("number is negative%d\n",value);
    }
    printf("not");
    return 0;
}