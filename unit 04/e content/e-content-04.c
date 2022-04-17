#include<stdio.h>
void main()
{
    int age[100],i,n,count=0;
    for(i=0;i<100;i++)
    {
    printf("\ninput age of 100 persons:-");
    
    scanf("%d",&age[i]);
    }
    for(i=0;i<100;i++)
    {
        if(age[i]>=50&&age[i]<=60)
        count++;
        else
        continue;
    }
    printf("there are %d persons whose age is in between 50 and 60 years",count);
    getch();
}