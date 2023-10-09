#include <stdio.h>

/**
 * main - Print lowercase alphabets followed by uppercase
 *alphabets and a new line
 * Return: 0
 */
int main(void)
{
	int a = 48;

	for (; a < 58; a++)
	{

		int b = 48;

		for (; b < 58; b++)
		{
			int c = 48;

			for (; c < 58; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56 || c != 57)
					{
						putchar(44);
						putchar(32);
					}

				}
				else
				{
				}
			}

		}
	};

	putchar('\n');
	return (0);
}
