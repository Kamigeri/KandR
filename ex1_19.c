#include <stdio.h>
#define MAXLINE 1000

int getlineT(char line[], int maxline);
int reverse(char line[], char reversedLine[],int len);

int main(int argc, char* argv[])
{
	int len,i;
	char line[MAXLINE];
	char reversedLine[MAXLINE];

	while((len = getlineT(line, MAXLINE)) > 0){
		reverse(line, reversedLine, len);
		for(i=0;i<len;i++){
			printf("%c",reversedLine[i]);
		}
		printf("\n");	
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

int reverse(char line[], char reversedLine[], int len)
{
	int i,j;

	j=len;	
	for(i=0;i<len;i++){
		j--;	
		reversedLine[j] = line[i];
	}	
}
