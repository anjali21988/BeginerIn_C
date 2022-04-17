#include<stdio.h>
#include<math.h>
main()
{
    int psquare(int);
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(psquare(num))
    
        printf("%d is a perfect square\n",num);
        else
        printf("%d is not a perfect square\n",num);
    
}
int psquare(int x)
{
    int positive(int);
    float sqr;
    if(positive(x))
    {
        sqr=sqrt(x);
        if((sqr-(int)sqr)==0)
            return 1;
        else
            return 0;
    }
}
int positive(int m)
{
    if(m>0)
    return 1;
    else return 0;
}