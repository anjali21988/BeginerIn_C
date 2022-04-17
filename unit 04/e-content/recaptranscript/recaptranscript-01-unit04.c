#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=3)
    {
        for(j=1;j<=3;j++)
        {
            printf("*");
            if(j==2)
            goto stop;

        }
        i=i+1;
    }
    stop:
    printf("\n \n exited!");
    getch();
}