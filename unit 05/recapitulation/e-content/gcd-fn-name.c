#include<stdio.h>
int main()
{
   int hcf(int,int); 
   int n1,n2;
   n1=18;
   n2=24;

   printf("%d\n",hcf(n1,n2));
   return 0;

}
int hcf(int n1,int n2)
{
    if(n1==0)
    return n2;
    if(n2==0)
    return n1;
    if(n1==n2)
    return n1;
    if(n1>n2)
    return hcf(n1-n2,n2);
    return hcf(n1,n2-n1);
}