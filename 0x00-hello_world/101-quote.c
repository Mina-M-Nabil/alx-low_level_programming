#include <unistd.h>



/**
 * main - Entry point
 *
 * Description: print a qoute using write function
 *  size_t write(int fd, const void *buf, size_t count);
 *
 * Return: 1 (error)
*/




int main(void)
{
	char qou[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qou, 59);
	return (1);
}
