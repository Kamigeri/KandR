#include <stdio.h>

#define CHARTABLE 128

int main(int argc, char* argv[])
{
	int c, i,j;
	int character[CHARTABLE];
	
	for(i = 0; i < CHARTABLE;i ++)
	{
		character[i] = 0;
	}

	while((c = getchar()) != EOF)
	{
		++character[c];//Increment the frequentie of character
	}		
	for(i = 0; i < CHARTABLE; ++i)
	{
		putchar(i);
		for(j = 0;j < character[i]; ++j)
		{
			putchar('*');
		}
		putchar('\n');	
	}
	
	return 0;
}
