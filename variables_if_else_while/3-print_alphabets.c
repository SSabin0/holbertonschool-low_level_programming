#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point of program
* Return: 0 if success
*
*/
int main(void)
{
	char letter;

	char cletter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	for (cletter = 'A' ; cletter <= 'Z' ; cletter++)
	{
		putchar(cletter);
	}
	putchar('\n');

	return (0);
}
