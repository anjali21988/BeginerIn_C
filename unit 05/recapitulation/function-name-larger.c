#include<stdio.h>
main()
{
    int x=5,y=8,z=12,a,b;
    a=larger(x,y);
    b=larger(a,z);
    printf("maximum=%d",b);

}
int larger(int m,int n)
{
    if(m>n)
    return m;
    else
    return n; 
}