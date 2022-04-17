#include<stdio.h>
#include<conio.h>
int main()
{
    int var1,var2;
    printf("enter two values");
    scanf("%d%d",&var1,&var2);
    printf("the average value of two values is %d",avg(var1,var2));
    getch();
    return 0;
}
int avg(int num1,int num2)
{
    printf("inside avg() function \n");
    printf("hi,i am a function by name avg \n");
    getche();
    printf("did you call me?? \n");
    getche();
    printf("im sorry.i cannot function today.let me call another function \n");
    getche();
    av(num1,num2);
}
int av(int a,int b)
{
    int c;
    printf("inside av() function \n");
    printf("hi!!thank you for coming to me \n");
    getche();
    printf("i am called by function avg.i am glad i can help you \n");
    getche();
    c=(a+b)/2;
    return c;
    
}