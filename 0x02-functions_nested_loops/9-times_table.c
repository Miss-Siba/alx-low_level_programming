#include"main.h"
/**
 * times_table - prints the 9 times table starting with 0.
 *
 * Return: always 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k < 9 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar((k / 9) + '0');
			_putchar((k % 9) + '0');
			}
		}
		_putchar('\n');
	}
}
