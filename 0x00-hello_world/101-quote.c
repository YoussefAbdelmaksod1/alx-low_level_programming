#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Description: 'this program prints a scentence without using printf or puts'
 *
 * Return: return 1 and exits the program
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
