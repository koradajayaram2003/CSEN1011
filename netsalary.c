#include<stdio.h>
int main()
{
	int basic,da,hra,ta,others;
	int pf,it;
	int netsalary;
	printf("Enter basic salary:");
	scanf("%d",&basic);
	printf("Enter HRA:");
	scanf("%d",&hra);
	printf("enter TA:");
	scanf("%d",&ta);
	printf("enter others:");
	scanf("%D",&others);
	da=(basic*12)/100;
	pf=(basic*14)/100;
	it=(basic*15)/100;
	netsalary=basic+da+hra+ta+others-(pf+it);
	printf("net salary is :%d\n",netsalary);
	
}
