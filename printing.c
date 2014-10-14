#include "prs.h"

void print_game_info (void)
{
	printf("%s",
			" PAPER ROCK SCISSORS \n"
			"-------------------------------------------------\n"
			" You and computer choose one each among paper(p),\n"
			" rock(r) and scissors(s) simultaneously.\n"
			"\n"
			" Paper covers the rock.\n"
			" Rock crushes the scissors.\n"
			" Scissors cut the paper.\n"
			"\n"
			" Your choices are: \n"
			"    p     paper \n"
			"    r     rock \n"
			"    s     scissors \n"
			"\n");
}

void print_help (void)
{
	printf("%s",
			" The following characters can be used for input: \n"
			"    p   paper \n"
			"    r   rock \n"
			"    s   scissors \n"
			"    g   game status \n"
			"    h   help \n"
			"    n   new game \n"
			"    q   quit \n"
			"\n");
}

void print_status (void)
{
	printf(" GAME STATUS\n");
	printf("------------------\n");
	printf(" Total games   : %d\n", nwins+nlose+nties);
	printf(" Human wins    : %d\n", nwins);
	printf(" Computer wins : %d\n", nlose);
	printf(" Ties          : %d\n", nties);
}

void final_result (void)
{
	if (nwins > nlose)
		printf("\nDAMN IT! YOU WIN!\n");
	else if (nwins < nlose)
		printf("\nHA! YOU LOSE!\n");
	else
		printf("\nPHEW! A TIE!\n");
}
