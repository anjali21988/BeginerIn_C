#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2,num3,num4,a,b,c;
    printf("enter the 4 numbers");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    a=smaller(num1,num2);
    b=smaller(a,num3);
    c=smaller(b,num4);
    printf("least number is %d",c);
}
int smaller(int m,int n)
{
    if(m<n)
    return m;
    else
    return n;
    }
