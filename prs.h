#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int nwins, nlose, nties;

void	print_game_info (void);
void	print_help (void);
void	print_status (void);
void	final_result (void);

void	compute (char, char);
char	computer_move (void);

char *getstr (char*, int, FILE*);
char *fullname (char);
