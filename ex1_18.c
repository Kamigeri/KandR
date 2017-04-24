#include <stdio.h>
#define MAXLINE 1000

int getlineT(char line[], int maxline);
int removeTrail(char line[],int len);

int main(int argc, char* argv[])
{
	int len,i;
	char line[MAXLINE];

	while((len = getlineT(line, MAXLINE)) > 0){
		removeTrail(line,++len);
		for(i=0;i<len;i++)
		{
			printf("%c",line[i]);
		}
	}
		return 0;
}

int getlineT(char s[],int lim)
{
	int c, i;

	for(i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int removeTrail(char line[],int len)
{
	int i,j,space;
	space = 0;
	
	for(i = 0; i < len-2; i++){
		j=i;
		++j;
		while(line[i+space] == ' ' || line[i+space] == '\t'){
			++space;	
		}
		if(space > 0)
		{
			line[i] = line[i+space]; 
		}	
	}
	if(line[i] == '\n')
	{
		line[++i] = '\0';
	}
}	
