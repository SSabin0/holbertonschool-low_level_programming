#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - Entry point of program
* Return: 0 if success
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		n = is positive\n;
	}
	else
	{
		if (n == 0)
		{
			n = is zero\n;
		}
	}
	else
	{
		if (n < 0)
		{
			n = is negative\n;
		}
	}
	return (0);
}
