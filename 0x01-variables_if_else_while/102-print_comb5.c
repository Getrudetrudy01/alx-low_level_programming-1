#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
<<<<<<< HEAD
 * Description: Write a program that prints all possible
=======
 * Description: Write a program that prints all possible 
>>>>>>> bfb3432f10d219b8304a2148b96f21167d493ece
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e;
	int f = 0;

	while (f < 10)
	{
		e = 0;
		while (e < 10)
		{
			d = 0;
			while (d < 10)
			{
				c = 0;
				while (c < 10)
				{
<<<<<<< HEAD
					if (!(f == c && e == d))
=======
					if ( ! (f == c && e == d))
>>>>>>> bfb3432f10d219b8304a2148b96f21167d493ece
					{
						putchar('0' + f);
						putchar('0' + e);
						putchar(' ');
						putchar ('0' + d);
						putchar('0' + c);
<<<<<<< HEAD
						if(! (f + e == 18 && c + d == 17 && d == 9))
=======
						if ( ! (f + e == 18 && c + d == 17 && d ==9))
>>>>>>> bfb3432f10d219b8304a2148b96f21167d493ece
						{
							putchar(',');
							putchar(' ');
						}
					}
					c++;
				}
				d++;
			}
			e++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
