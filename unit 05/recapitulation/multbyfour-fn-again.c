#include<stdio.h>
main()
{
    int i=5,j=9,k=8,a,b,c;
    a=multbyfour(i);
    b=multbyfour(j);
    c=multbyfour(k);
    printf("(%d,%d)\t(%d,%d)\t(%d,%d)",i,a,j,b,k,c);
}
int multbyfour(int x)
{
    x=x*4;
    return x;
}