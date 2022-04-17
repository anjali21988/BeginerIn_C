#include<stdio.h>
main()
{
    int x,y,z,w;
    /*read the integers*/
    int max(int,int);
    printf("\n x=");
    scanf("%d",&x);
    printf("\n y'''''");
    scanf("%d",&y);
    printf("\n z=");
    scanf("%d",&z);
    /*calculate and display the maximum value*/
    w=max(x,y);
    printf("\n\maximum=%d\n",max(z,w));
}
int max(int a,int b)
{
    int c;
    c=(a>=b)?a:b;
    return c;
}