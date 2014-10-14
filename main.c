#include "game.h"

int main ()
{
	char temp[100];

	print_game_info();

	nwins = 0;
	nlose = 0;
	nties = 0;

	srand(time(NULL));
	while (1)
	{
		char choice, human, computer;
		printf("Enter your move (h for help): ");
		getstr(temp, sizeof(temp), stdin);
		choice = temp[0];

		switch (choice) {
			case 'h':
				print_help();
				break;

			case 'p':
			case 'r':
			case 's':
				human = choice;
				computer = computer_move();
				compute(human, computer);
				break;

			case 'g':
				print_status();
				break;

			case 'n':
				nwins = nlose = nties = 0;
				break;

			case 'q':
				print_status();
				final_result();
				exit(0);

			default:
				printf("Invalid choice.\n");
				break;
		}
	}

	return (0);
}
