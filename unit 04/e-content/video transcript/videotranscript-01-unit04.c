//program to check whether the number is odd or even
#include<stdio.h>
int main()
{
    int num;
    printf("enter number:\n");
    scanf("%d\n",&num);
    if (num%2==0)
    {
        printf("%d number is even\n",num);
    }
    else{
        printf("%d number is odd\n",num);
    }
    return 0;
}