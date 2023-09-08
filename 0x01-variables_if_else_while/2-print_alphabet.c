#include <stdio.h>



/**
 * main - Entry point
 *
 * Description: A C program that prints alphaptic characters
 *	using putchar function
 *
 * Return: Always 1 (Success)
*/



int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
