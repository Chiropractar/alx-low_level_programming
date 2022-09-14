#include "main.h"
/**
 * main - prints a series of characters
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	char printC[] = {"_putchar"};

	while (i < 8)
	{
		_putchar(printC[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
