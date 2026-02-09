#include <stdio.h>
/**
* main - Entry point of program
* Return: 0 if success
*
*/
int main(void)
{
printf("Char size: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Int size: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Long int size: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Long long int size: %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Float size: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
