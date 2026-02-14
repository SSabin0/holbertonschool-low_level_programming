#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet_x10 - Prints the alphabet x10 in lowercase followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count;

	int letter;

	for (count = 0 ; count <= 9 ; count++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
