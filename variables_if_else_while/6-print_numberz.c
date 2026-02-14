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
	int number;

	for (number = 0 ; number <= 9 ; number++)
	{
	putchar(number + '0');
	}
	putchar('\n');

	return (0);
}
