#include<stdio.h>
int main()
{
    /*reverse a number and sum of the digits*/
    int n,reverse=0,remainder,sum=0;
    printf("enter an integer:");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        sum=sum+remainder;
        n/=10;


    }
    printf("reversed number =%d\n",reverse);
printf("sum is=%d\n",sum);
    return 0;

}