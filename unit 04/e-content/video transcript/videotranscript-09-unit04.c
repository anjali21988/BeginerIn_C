//demo for the nested for loop
#include<stdio.h>
int main()
{
    int n,i,j;
    
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        printf("\n i=%d\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%d\t",j);
        }
    }
    return 0;
}