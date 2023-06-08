#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: Character
 * Return: 1, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
