#include "main.h"
#include <ctype.h>

/**
 *
 *_isupper - Affiche valeur si MAJ
 *
 * @c: a surveiller
 *
 * Return: 1 ou 0
 *
 */

int _isupper(int c)
{
	if (c == 'A' && 'Z')
	{
		_isupper('C');
		return (1);

	}
	else
	{ 
		return (0);
	}

}

