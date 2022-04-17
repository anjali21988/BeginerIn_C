/* c program to print multiplication table */
#include<stdio.h>
void main()
{
    int rowmax=10,colmax=10,row,col,x;
    printf("multiplication table\n");
    printf(".................................\n");
    for(row=1;row<=rowmax;row=row+1)
    {
        for(col=1;col<=colmax;col=col+1)
        {
            x=row*col;
            printf("%4d",x);
        }
        printf("\n");
    }
    printf(".......................................\n");
    
}