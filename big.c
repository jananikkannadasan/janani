#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("enter the number");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b) && (a>c))
            	printf("a is big");
	if((b>a) && (b>c))
		printf("b is big");
	if((c>a) && (c>b))
		printf("c is big");
	// your code goes here
	return 0;
}
