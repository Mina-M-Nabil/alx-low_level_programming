#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: a program that prints nums from 0 to 9 using putchar function
 *
 * Return: Always 0 (Success)
*/



int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
