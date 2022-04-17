#include<stdio.h>
int main()
{
    /*program to calculate factors of given number*/
    int num,i;
    printf("enter a positive integer:\n");
    scanf("%d\n",&num);
    printf("factors of %d are:\n",num);
    for(i=1;i<=num;++i)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        }
    }
    

    return 0;
}