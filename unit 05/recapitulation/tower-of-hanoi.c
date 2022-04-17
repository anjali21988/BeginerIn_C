#include<stdio.h>
void
recursive_hanoi(int,char,char,char);
int main()
{
    int n;
    printf("towers of hanoi\n\n");
    printf("how many disks?");
    scanf("%d",&n);
    printf("\n");
    recursive_hanoi(n,'L','R','C');
    return 0;
}
void recursive_hanoi(int n,char from,char to,char temp)
{
    /*transfer n disks from one pole to another*/
    /*n=number of disks*/
    if(n>0)
    {
        recursive_hanoi(n-1,from,temp,to);
        printf("move disk %d from %c to %c \n",n,from,to);
        recursive_hanoi(n-1,temp,to,from);
    }
    return;
}