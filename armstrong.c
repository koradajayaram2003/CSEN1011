#include<stdio.h>
int main()
{


int n,r,s=0,n1;
printf("enter the number=");
scanf("%d",&n);
n1=n;


while(n>0)
{
r=n%10;
s=s+(r*r*r);
n=n/10;
}



if(n1==s)
printf("armstrong number");
else

printf("not armstrong number");
return 0;
}
