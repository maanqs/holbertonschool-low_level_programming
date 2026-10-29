#include "main.h"
#include <ctype.h>

/**
*_isdigit - Affiche resultat si inferieure a 9.
*
*@c: a surveiler.
*
*Return: 1 si -, 0 si +/
*/

int _isdigit(int c)
{
	if ((c >= '0') && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
