#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    printf("largest of %d %d and %d is %d",a,b,c,big);
    if(a>b)
    {
        if(a>c)
        big=a;
        else
        big=c;
    }
    else{
        if(b>c)
        big=b;
        else
        big=c;
    }
    printf("largest of %d %d and %d is %d",a,b,c,big);
    return 0;
}