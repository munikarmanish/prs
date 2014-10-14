#include "game.h"

char *getstr (char *string, int length, FILE* file)
{
	fgets (string, length, file);
	int len = strlen(string);
	if (string[len - 1] == '\n')
		string[len - 1] = 0;
	return string;
}

char *fullname (char c)
{
	if (c == 'p')
		return "Paper";
	else if (c == 'r')
		return "Rock";
	else if (c == 's')
		return "Scissors";
	else
		return NULL;
}
