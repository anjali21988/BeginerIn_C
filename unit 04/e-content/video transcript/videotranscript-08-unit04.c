//program to calculate the sum of n numbers
#include<stdio.h>
int main()
{
    int num,count,sum=0;
    printf("enter a positive number:");
    scanf("%d",&num);
    for (count=1;count<=num;++count)
    {
        sum+=count;
    }
    printf("\n sum=%d",sum);
    return 0;
    
}