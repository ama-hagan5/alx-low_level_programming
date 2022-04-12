#include "main.h"
/**
 * times_table - prints tables
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int num1;
	int num2;
	int num3;
	for (num1 = 0; num1 <= 9; a++)
	{
		for (num2 = 0; num2 <= 9; b++)
		{
			num3 = num1 * num2;
			if ((num3 / 10) == 0)
			{
				if (num2 == 0)
				{
					_putchar ('0');
				}
				if (num2 != 0)
				{
					_putchar (' ');
					_putchar ((num3 % 10) + '0');
				}
				if (num2 < 9)
				{
					_putchar(',');
					_putchar (' ');
				}
			}
			else
			{
				_putchar ((num3 / 10) + '0');
				_putchar ((num3 % 10) + '0');
				if (num2 < 9)
				{
					_putchar(',');
					_putchar (' ');
				}
			}
		}
		_putchar ('\n');
	}
}
