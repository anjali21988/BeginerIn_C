#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,discriminant,root1,root2,realpart,imagpart; 
    printf("enter three numbers");
    scanf("%f %f %f", &a, &b, &c);
    printf("largest of %f %f and %f", a, b, c);

    

    discriminant = (b * b) - (4 * a * c);
    /*if roots are real and different*/
    if (discriminant > 0)
    {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1=%f and root2=%f \n", root1, root2);
    }
    /*if roots are real and equal*/
    else if (discriminant == 0)
    {
        
        root1 = root2 = -b / (2 * a);
        printf("root1=root2=%f\n", root1);
    }
    /*if roots are not real*/
    else
    {
    
        realpart = -b / (2 * a);
        imagpart = sqrt(-discriminant) / (2 * a);
        printf("root1=%f+%fi and root2=%f-%fi \n", realpart, imagpart, realpart, imagpart);
    }
    return 0;
}