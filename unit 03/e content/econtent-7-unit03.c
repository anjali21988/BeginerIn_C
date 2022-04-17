#include<stdio.h>

int main()
{
    /*to check whether a given number is palindrome*/
    int n,r,s=0,c;
    printf("enter any number:\n");
    scanf("%d",&n);
    c=n;
    while (n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if (c==s)
    {
        printf("palindrome");
    }
    else{
    printf("not");
    }
    return 0;
}