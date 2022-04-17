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
    int av;
    av=(num1+num2)/2;
    return av;
}