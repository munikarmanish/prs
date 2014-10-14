#include "prs.h"

char computer_move (void)
{
	char prs[] = "prs";
	return (prs[rand() % 3]);
}

void compute (char human, char computer)
{
	printf("Human    : %s\n", fullname(human));
	printf("Computer : %s\n", fullname(computer));

	char result;

	if (human == computer)
		result = 't';
	else {
		switch (human) {
			case 'p':
				result = (computer == 'r')? 'w' : 'l';
				break;

			case 'r':
				result = (computer == 's')? 'w' : 'l';
				break;

			case 's':
				result = (computer == 'p')? 'w': 'l';
				break;

			default:
				fprintf (stderr, "PROGRAMMER ERROR!\n");
				exit(1);
		}
	}

	switch (result) {
		case 'w':
			printf("YOU WIN!\n"); nwins++;
			break;

		case 'l':
			printf("YOU LOSE!\n"); nlose++;
			break;

		case 't':
			printf("A TIE!\n"); nties++;
			break;

		default:
			fprintf (stderr, "PROGRAMMER ERROR!\n");
			exit(1);
	}
}
