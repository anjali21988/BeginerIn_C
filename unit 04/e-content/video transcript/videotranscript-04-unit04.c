#include<stdio.h>
int main()
{
    float a,b,large;
    printf("enter a or b:");
    scanf("%f %f",&a,&b);
    if(a>b)
    {
        large=a;
        goto display;
    }
    else
    {
        large=b;
        goto display;

    }
    display:printf("largest=%f",large);
    return 0;
}