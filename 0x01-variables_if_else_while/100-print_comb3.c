#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
        int counter = 1;
        int duct = 0;

	for (d = 1; d < 90; d++)
	{
                counter += 1;
                if (counter == 10)
                {
                        counter = 0;
                        duct += 1;
                }

                int v = (d / 10);
                int j = (d % 10);
                if (j > duct)
                {
		        putchar((d / 10) + '0');
		        putchar((d % 10) + '0');
                }
		if (d != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}
