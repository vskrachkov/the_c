#include <stdio.h>

#define MAXLINE 1000


int getline(char line[], int MAXLINE);
void copy(char to[], char from[]);


int main() 
{
	int len; /* current line length */
	int max; /* max line length from all viewed */
	char line[MAXLINE]; /* current line */
	char longest; /* the longest line */
	max = 0;

	while ( (len = getline(line, MAXLINE)) > 0 )
			if (len > max)
	
}
