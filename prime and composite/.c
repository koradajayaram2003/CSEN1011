#include<stdio.h>
int main() {
	int num, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for (i = 2; i < num-1; i++)
	{
		if (num % i == 0)
		{
			printf("Composite");
			return 0;
		}
	}
	printf("Prime");
	return 0;
}
