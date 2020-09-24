#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int horas1, horas2, minutos1, minutos2 = 0;

	for (horas1 = 0; horas1 < 3; horas1++)
	{
		for (horas2 = 0; horas2 < 10; horas2++)
		{
			for (minutos1 = 0; minutos1 < 6; minutos1++)
			{
				for (minutos2 = 0; minutos2 < 10; minutos2++)
				{
				if (horas1 == 2 && horas2 > 3)
				{
					return;
				}
				_putchar(horas1 + 48);
				_putchar(horas2 + 48);
				_putchar(58);
				_putchar(minutos1 + 48);
				_putchar(minutos2 + 48);
				_putchar(10);
				}
			}
		}
	}
}
