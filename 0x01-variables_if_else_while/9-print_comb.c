#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
	int nummber;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}

		putchar(', ');
		putchar(' ');
	}

	putchar('\n');
	
	return (0);

}
