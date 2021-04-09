#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a=10,b=20;
  printf("before swap a=%d b=%d",a,b);
  a=a*b;
  b=a/b;
  a=a/b;
  system("cls");
  printf("after swap a=%d b=%d",a,b);
  return 0;
}
