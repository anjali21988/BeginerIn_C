#include<stdio.h>
main()
{
    int i=5,j=9,a,b;
    a=multbyfour(i);
    b=multbyfour(j);
    printf("(%d,%d)\t(%d,%d)",i,a,j,b);

}
int multbyfour(int x)
{
    x=x*4;
    return x;
}