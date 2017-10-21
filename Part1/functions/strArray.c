#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int limit);
void copy(char to[], char from[]);


int main()
{
	int len; /* current line length */
	int max; /* max line length from all viewed */
	char line[MAXLINE]; /* current line */
	char longest[MAXLINE]; /* the longest line */
	max = 0;

	while ( (len = getline(line, MAXLINE)) > 0 )
			if (len > max) {
				max = len;
				copy(longest, line);
			}
			if (max > 0) {
				printf("%s\n", longest);
			}

}


int getline(char line[], int limit)
{
	int c, i;
	for (i = 0; i <= limit && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}


void copy(char to[], char from[])
{
	int i;
	while ((to[i] = from[i]) != '\n')
		++i;
}
