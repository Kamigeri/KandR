#include <stdio.h>

void convFahrToCelsiusTab(int lower,int upper,int step);

int main(int argc, char* argv[])
{
	convFahrToCelsiusTab(0,300,20);
	return 0;
}

void convFahrToCelsiusTab(int lower, int upper, int step)
{
	int fahr,celsius;
	while(fahr <= upper){
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}	
}
