#include "main.h"

/**
*print_sign	-	Affiche	le	signe	d'un	nombre.
*
*@n: Caractere a surveiller
*
* Return: 1 si sup, 0 si egal, -1 si inf.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		_putchar('-');
		return (-1);
}


