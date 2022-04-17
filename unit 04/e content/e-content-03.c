/* c program to print number pattern */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    
    
    for(i=1;i<=4;i++)
    {
        k=1;
        
        for(j=1;j<=8;j++)
        {
            if(j>=6-i && j<=4+i && k)
            {
            



            printf("%d",i);
            k=0;
            }
            else{
            printf(" ");
            k=1;
            }
        }
        printf("\n");
    }
    return 0;
}