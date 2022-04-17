#include<stdio.h>
int find_fact(int);
int main()
{
    int num,fact;
    printf("\n enter the value of an integer:");
    scanf("%d",&num);
    fact=find_fact(num);
    printf("\n factorial of %d is : %d",num,fact);
    return 0;
}
int find_fact(int n)
{
    if(n==0) //base condition
    return 1;
    //recursive call
    return(n*find_fact(n-1));

}