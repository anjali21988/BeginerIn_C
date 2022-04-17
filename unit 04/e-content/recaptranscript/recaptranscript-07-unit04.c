/*program to print multiplication table*/
#include<stdio.h>
#include<math.h>
int main()
{
    int rowmax=10,colmax=10,row,col,x;
    printf("multiplication table\n");
    printf("...................................\n");
    row=1;
    do {
        col=1;
        
       do{ x=row*col;
        printf("%4d",x);
        col=col+1;
       }
    
    while(col<=colmax);
    printf("\n");
    row=row+1;
}
while (row<=rowmax);
printf("......................................\n");
}

