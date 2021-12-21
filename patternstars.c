#include <stdio.h>
 
int main() 
{
  int Rows, i, j, space;
	
  printf("Please Enter the Number of Rows:");
  scanf("%d", &Rows);
	
  for ( i = Rows ; i >= 1; i-- ) 
    {
      for ( j = 0; j <= Rows-i; j++ ) 
      {
      	printf(" ");    	
	  }
	  for (space= 0; space < (2 * i - 1); space++)
	  {
	  	printf("*"); 
	  }
      printf("\n");
    }
  return 0;
}
