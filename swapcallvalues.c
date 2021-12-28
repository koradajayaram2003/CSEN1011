#include<stdio.h>
void swap(int , int);
int main()
{
	int x,y;
	printf("Enter the value of x and y \n",x,y);
	scanf("%d%d", &x,&y);
	printf("Before swapping \n x=%d\n y=%d\n", x,y);
	swap(x,y);
	printf("after swapping \n x=%d\n y=%d\n",x,y);
	return 0;
	
}
void swap(int a,int b)
{
	int temp;
	temp=b;
	b=a;
	a=temp;
	printf("Values of a and b is %d%d\n",a,b);
	
}
