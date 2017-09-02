#include <stdio.h>

int main(void) {
	char c;
	int upper,lower;
	printf("enter the alphabet:");
	scanf("%c",&c);
	lower=(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
	upper=(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
	if(c==lower)
	{
		printf("vowels");
	}
	else
	{
		printf("consonants");
	}
	
	// your code goes here
	return 0;
}
