#include <stdio.h>
/**
 * main - code to print Fizzbuzz
 i*
 * Return: void.
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
<<<<<<< HEAD
	for (n = 1; n <= 100; n++)
=======
	for (n = 2; n <= 100; n++)
>>>>>>> f75ccfc5953412fe4a963a543012cfc60eadbe18
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
