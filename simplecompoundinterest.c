/*Algorithm
Step 1 :Start
Step 2 :Enter the value of Principle(p)
Step 3 :Enter the value of Time period(t)
Step 4 : Enter the value of Rate of interest(r)
Step 5: Calculate the simple interest by the formula
Step 6: Calculate the Compound interest by the formula
Step 7 :stop
/*






#include<stdio.h>
int main()
{
	int P,T,R,S,C;
	printf("Enter Principalamount\n");
	scanf("%d",&P);
	printf("Enter Rate of interest per annum\n");
	scanf("%d",&R);
	printf("Enter required Time\n");
	scanf("%d",&T);
	S=P*T*R/100;
	C=P*((1+R/100),T);
	printf("Simleinterest of the given data is:%d\n",S);
	printf("Compoundinterest of the given data is:%d",C);
	
}

/*learnings
know to execute the simple program
......to calcute simple and compound interest
/*
