#include <stdio.h>

int main(int argc,char* argv[])
{
	char c;
	int nb = 0,nt = 0,nl =0;
	
	while((c = getchar()) != EOF){
		if(c == ' ') ++nb;
		if(c == '\t') ++nt;
		if(c == '\n') ++nl;
	}

	printf("blanks %d tabs %d lines %d\n",nb,nt,nl);
		
	return 0;
}
