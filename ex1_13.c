#include <stdio.h>

#define MAX_LENGHT 10 //Max histogram length

#define IN  1 //inside a word
#define OUT 0 //outside a word

int main(int argc, char* argv[])
{
	int c, nl, nw, wl, i, j, state;
	int histogram[10];

	c = nl = nw = wl = i = 0;
	state = OUT;
	
		for(i = 0; i < MAX_LENGHT;i++){
		histogram[i] = 0;
	}

	while((c = getchar()) != EOF){
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t')
		{
			histogram[wl] = ++histogram[wl];
			state = OUT;
			wl = 0;
			
		}
		else if(state == OUT){
			state = IN;
			++nw;
		}
		else if (wl < MAX_LENGHT){
			++wl;
		}
		else{
			printf("Word is too long\n");
		}			
	}

	printf(" WORD LENGTH OCCURANCE HISTOGRAM \n");
	printf("******************************** \n");

	for(i = 0; i < MAX_LENGHT; i++)
	{
		j = i+1;
		printf("%d : ",j);
		for(j = 0; j < histogram[i]; j++)
		{
			printf("|");
		}
		printf("\n");
	}
	return 0;
}
