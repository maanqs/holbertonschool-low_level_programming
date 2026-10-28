#include "main.h"

/**
*print_last_digit - Affiche le dernier chiffre d'un nombre.
*
*@n: caractere a surveiller.
*Return: Dernier nombre.
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = last * -1;

	_putchar('0' + last);
return (last);

}
