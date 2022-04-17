/*program to compute the roots of quadratic equation*/
#include<stdio.h>
#include<math.h>
int main()
{
    /*..declaration..*/
    float a,b,c,discriminant,root1,root2;
    printf("enter the values of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    /*assignments*/
    discriminant=b*b-4*a*c;
    if (discriminant<0)
    {
        printf("roots are imaginary\n");
    }
    else
    {
        root1=(-b+discriminant)/2*a;
        root2=(-b-discriminant)/2*a;
        printf("root1=%f root2=%f",root1,root2);
    }

}