#include<stdio.h>
void main()
{
    int x;
    for(x=1;x<=10;x++)
    {
        if(x==5)
        break; /*break loop only if x==5*/
        printf("%d",x);

    }
    printf("\n broke out of loop");
    printf("at x=%d",x);
}