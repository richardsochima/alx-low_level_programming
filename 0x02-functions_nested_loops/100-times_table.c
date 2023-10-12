#include "main.h"

/**
 * times_table - The function to print the 9 times table
 *
 * @: Prints out values
 *
 * Return: 0 The output is the 9 times table
 *
 */

void times_table(void)
{
	int i, j, output1, output2, output3;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			output1 = i * j;
			if (output1 > 9)
			{
				output2 = output1 / 10;
				output3 = output1 % 10;
				_putchar(' ');
				_putchar(output2 + '0');
				_putchar(output3 + '0');
			}
			else
			{
				if (j > 0 && j < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(output1 + '0');
			}

			if (j < 9)
			{
				_putchar(',');
			}
		}

		_putchar('\n');

	}
}
