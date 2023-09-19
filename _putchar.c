#include "main.h"
/**
 * _putchar - print character
 * @character: character to print
 * Return: 1, success, -1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
