#include <stdio.h>



/**
 * main - Entry point
 *
 * Description: A C program that prints lowercase chars
 * followed by uppercase chars followed by
 * new line using putchar function
 *
 * Return: Always 1 (Success)
*/



int main(void)
{
	char ch_lc = 'a';
	char ch_uc = 'A';

	for (ch_lc = 'a'; ch_lc <= 'z'; ch_lc++)
	{
		putchar(ch_la);
	}
	for (ch_uc = 'A'; ch_uc <= 'Z'; ch_uc++)
	{
		putchar(ch_uc);
	}
	putchar('\n');
	return (0);
}
