#include <unistd.h>

/**
 * putchar - prints character of i
 *
 * @i - uses _putchar function to i
 * 
 * Return: returns character on success
 */

int _putchar(char i)
{
	return (write(1, &i, 1));
}
