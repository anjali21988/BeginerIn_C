#include<stdio.h>
#include<conio.h>
void swap(int x,int y); // fn/method declaration/prototype 

main()
{
    int a,b;
    printf("enter the values of a,b:");
    scanf("%d%d",&a,&b);
    printf("\n the values after the change are a=%d,b=%d", &a,&b);
    swap(a,b);   // calling swap fn
    printf("\n the values even after the change are a=%d,b=%d",a,b);
    getch();
    return 0;
}
void swap(int x,int y)  // fn definition and called fn
{
    printf("\n the values after the change are x=%d,y=%d", &x,&y);
    int temp=0;
    printf("just an example of call by value \n");
    temp=x;
    x=y;
    y=temp;
    printf("\n the values after swapping are x=%d,y=%d",x,y);
}
