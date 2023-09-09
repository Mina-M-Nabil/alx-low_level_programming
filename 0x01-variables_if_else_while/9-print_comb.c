#include <stdio.h>



/**
 * main - Entry point
 *
 * Description: a program that prints from 0 to 9 separated by , and space
 *
 * Return: Always 0 (Success)
*/



int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
