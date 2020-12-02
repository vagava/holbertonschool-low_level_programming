#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0
*/
int main(void)
{
	int character, lot;

	lot = 2772;
	srand(time(NULL));
	while (lot > 122)
	{
		character = (rand() % 128) + 1;
		putchar(character);
		lot -= character;
	}
	putchar(lot);
	return (0);
}
