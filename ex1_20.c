#include <stdio.h>

#define TABINC 8

int main(void)
{	
	char c;
	int pos,nb,i;
	
	pos = 1;	
	while((c=getchar()) != EOF){
		if(c == '\t'){
			nb = TABINC - ((pos - 1) % TABINC);
			++pos;
			for(i=0;i<nb;i++){
				putchar(' ');	
			}
		}
		else if(c == '\n'){
			pos = 1;
		}
		else{
			putchar(c);
			++pos;
		}
	}
	return 0;	
}
