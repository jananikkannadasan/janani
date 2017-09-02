#include <stdio.h>

int main(void) {
	int num;
	printf("enter the num");
	scanf("%d",&num);
	if(num>1)
	{
	  if(num%2==0)
	  {
	  	printf("even");
	  }
	  else
	  {
	  	printf("odd");
	  }
	}
	// your code goes here
	return 0;
}
