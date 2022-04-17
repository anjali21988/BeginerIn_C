#include<stdio.h>
void main()
{
    int M,N;
    long int F=1;
    printf("enter the number\n");
    scanf("%d",&N);
    if(N<=0)
    F=1;
    else{
        for(M=1;M<=N;M++)
        F*=M;
    }
    printf("THE FACTORIAL Of the number is %ld",F);
    getch();
}