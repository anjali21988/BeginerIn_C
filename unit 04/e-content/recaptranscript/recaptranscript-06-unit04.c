#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=1,count;
    float acc,x,term,sum;
    printf("enter the angle and accuracy\n");
    scanf("%d %f",&x,&acc);
    x=x*3.1416/180.0;
    
    sum=x;
    term=x;
    while((fabs(term))>acc)
    {
        term=-term*x*x/((2*i)*(2*i+1));
        sum+=term;
        i++;
        
    }
    printf("\nsum of sine series is %f",sum);
    return 0;
    
}