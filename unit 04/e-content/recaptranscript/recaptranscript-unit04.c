#include<stdio.h>
int main()
{
    double a,b;
    read:
    printf("enter the value of a \n");
    scanf("%f",&a);
    if(a<0) goto read;
    b=sqrt(a);
    printf("%f %f \n",a,b);
    goto read;

    return 0;
}