//to use scanf() to read data from the user
#include<stdio.h>

int main()
{
  int i;
  float f;
  char c;
  char str[10];
  scanf("%d %f %c %s",&i,&f,&c,str);
  printf("%d %f %c %s",i,f,c,str);  
    return 0;
} 