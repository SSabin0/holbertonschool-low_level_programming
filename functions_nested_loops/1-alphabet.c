#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* main - Entry point of program
* Return: 0 if success
*
*/

void print_alphabet(void)
{
	int letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
