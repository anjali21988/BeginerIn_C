#include<stdio.h>
#include<conio.h>
void swap(int *,int *);  // we're using "pointers" variable here

main()
{
    int a,b;
    printf("enter the vaues of a,b:");
    scanf("%d%d",&a,&b);
    printf("\n the values after the change are a=%d,b=%d", &a,&b);
    swap(&a,&b);  // address operator
    printf("\n the values after the change are a=%d,b=%d",a,b);
    getch();
    return 0;

}
void swap(int *x,int *y)
{
    printf("\n the values before swapping are x=%d,y=%d",x,y);
    printf("\n the values before swapping are x=%d,y=%d",*x,*y);
    int temp=0;
    printf("example of call by reference \n");
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\n the values after swapping are x=%d,y=%d",x,y);
}