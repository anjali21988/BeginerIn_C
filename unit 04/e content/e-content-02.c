/* c program to print number pattern */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,N,space;
    printf("enter N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        

        for(j=1;j<=i;j++)
        {


            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}