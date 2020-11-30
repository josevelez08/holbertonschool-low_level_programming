#include <stdio.h>
/**
 * main - print the 100 first fibonacci numbers
 *
 * Return: 0 Success
 */
int main(void)
{
	const long div = 1000000000000;
	unsigned long bigpart, smallpart, bigpart1, smallpart1, bigpart2;
	unsigned long smallpart2;
	int a;

	bigpart2 = 1 / div;
	smallpart2 = 1 % div;
	bigpart1 = 2 / div;
	smallpart1 = 2 % div;
	bigpart = 0;

	printf("%lu, %lu, ", smallpart2, smallpart1);

	for (a = 2; a < 98; a++)
	{
		if (bigpart2 != 0)
			bigpart = bigpart1 + bigpart2 +
				((smallpart1 % div) + (smallpart2 % div)) / div;
		else
			bigpart = ((smallpart2 + smallpart1) / div) + bigpart1;

		smallpart = ((smallpart1 % div) + (smallpart2 % div)) % div;

		if (a == 97)
			printf("%lu%012lu\n", bigpart, smallpart);
		else if (bigpart != 0)
			printf("%lu%012lu, ", bigpart, smallpart);
		else
			printf("%lu, ", smallpart);

		bigpart2 = bigpart1;
		smallpart2 = smallpart1;
		bigpart1 = bigpart;
		smallpart1 = smallpart;
	}
	return (0);
}
