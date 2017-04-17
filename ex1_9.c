#include <stdio.h>

int main(int argc,char* argv[])
{
	char c;
	int bl = 0;
	
	while((c=getchar()) != EOF){
		if(c == ' ' && bl == 0)
		{
			++bl;
			putchar(c);//Copy input to it's output
		}
		else if(c == ' ' && bl > 0){
			//do nothing just loop trough
		}
		else{
			bl = 0;
			putchar(c);//Copy input to it's output
		}
			
	}
	
	return 0;
}
