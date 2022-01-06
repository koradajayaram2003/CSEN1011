#include<stdio.h>
int main()
{
  int a=10,b=20;
  printf("Before swap a=%d b=%d\n",a,b);
  a=a+b; //a=30 (10+20)
  b=a-b; //b=10 (30-20)
  a=a-b; //a=20 (30-10)
  printf("After swap a=%d b=%d\n",a,b);
  return 0;
}
/*
Output:
Before swap 
a=10 b=20
After swap 
a=20 b=10
*/
