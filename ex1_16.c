#include <stdio.h>
#define MAXLINE 1000

int getlineT(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char* argv[])
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = getlineT(line, MAXLINE)) > 0){
		printf("len %d: %s", len, line);
			if(len > max){
				max = len;
				copy(longest, line);
			}
		}
	if(max > 0)
		printf(" The longest line in is: %s", longest);
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

void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
