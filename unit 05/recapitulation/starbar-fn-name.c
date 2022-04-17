#include<stdio.h>
void starbar(int);
/*prototype the function*/
int main(void)
{
    int limit;
    printf("enter the number of asterisk=");
    scanf("%d",&limit);
    /*use the function*/
    starbar(limit);
    return 0;
}
void starbar(int n)
/*define the function*/
{
    int count;
    for(count=1;count<=n;count++)
    putchar('*');
    putchar('\n');
}