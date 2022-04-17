#include<stdio.h>
int main()
{
    int num,large,n,i;
    
    printf("enter number of numbers\n");
    scanf("%d",&n);
    large=0;
    i=0;
    while(i<n)
    {
        printf(" enter number\n");
        scanf("%d",&num);
        if(large<num)
        large=num;
        i++;

    }
    printf("\nlarge=%d\n",large);
    return 0;
}