#include<stdio.h>
int main()
{
    /*local variable definition*/
    char grade;
    printf("enter grade\n");
    scanf("%c\n",&grade);
    switch(grade)
    {
        case 'A':
        printf("excellent!\n");
        break;
        case 'B':
        case 'C':
        printf("well done\n");
        break;
        case 'D':
        printf("you passed\n");
        break;
        case 'F':
        printf("BETTER TRY AGAIN\n");
        break;
        default:
        printf("invalid grade\n");

    }
    printf("your grade is %c\n",grade);
    return 0;
}