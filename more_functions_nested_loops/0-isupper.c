#include "main.h"
#include <ctype.h>

/**
* _isupper	-	Sert a afficher une valeur diff si maj.
*
*@c: a surveiller
*
*Return: 1 ou 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	else
	{
		return (0);
	}

}

