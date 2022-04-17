#include<stdio.h>
void main()
{
    int num1,num2;
    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1>=num2)
    {
        if(num1==num2) {
            printf("result:%d=%d",num1,num2);
        }
        else {
            printf("result:%d>%d",num1,num2);
        }

        
    }
    else{
        printf("result:%d<%d",num1,num2);
    }
    getch();
}