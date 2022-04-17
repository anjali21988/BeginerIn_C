#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    do
    {
        printf("\n enter the number:");
        scanf("%d",&num);
        if(num<0)
        {
            break;
        }
        if( num>20)
        {
            printf("skip the value\n");
            continue;
        }       
         /* code */
         printf("the number is:%d",num);
    } while (num!=0);
    
    
}