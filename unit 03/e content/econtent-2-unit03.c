#include<stdio.h>
#include<conio.h>
/*program to copy the input ,a character at a time,to the output*/
int main()
{
int c;
c=getchar();
while (c!=EOF)
{
    putchar(c);
    c=getchar();
    
}


return 0;
}