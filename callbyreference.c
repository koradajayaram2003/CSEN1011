// call by reference using swap function

#include<stdio.h>
int swap(int *x, int *y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
  printf("After swapping %d %d",*x,*y);
}
int main()
{
  
  int a,b;
  printf("Before swapping %d %d",a,b);
  printf("\n");
  swap(&a,&b);
}

/*
Output:
Before swapping 32765 -1092075088
After swapping -1092075088 32765
*/
