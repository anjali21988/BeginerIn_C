#include<stdio.h>
int main()
{
    int first=0,second=1,i,n,sum=0;
    printf("enter the number of terms:\n");
    scanf("%d",&n);
    //accepting the terms
    printf("fibonacci series:");
    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            sum=i;
        }
        //to print 0 and 1
        else{
            sum=first+second;
            first=second;
            second=sum;
            //to calculate the remaining terms.
            //value of first and second changes as new term is printed.

        }
        printf("%d\n",sum);
    }
   return 0; 
}