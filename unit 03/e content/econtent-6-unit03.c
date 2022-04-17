#include<stdio.h>
int main()
{
    /*to print the multiplication table for any given number*/
    int num;
    printf("enter the value of number:");
    scanf("%d",&num);
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n",num,i+1,(i+1)*num);
    }
    
    return 0;
}