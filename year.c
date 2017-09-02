#include <stdio.h>

int main(void) {
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			printf("leap year");
			else
			printf("not leap year");
		}
		else("leap year");
	}
	else("not leap year");
	// your code goes here
	return 0;
}
