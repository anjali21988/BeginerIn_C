#include <stdio.h>

int main()
{
    int sum(int);
    int n = 5;

    printf("%d\n", sum(n));
    return 0;
}
int sum(int n)
{
    if (n == 0)
        return 0;
    else{
        int res1 =  sum(n - 1);
        int res2 = res1 + n;
        printf("res1:- %d , res2:-  %d\n", res1 , res2);
        return res2;
    }
}
