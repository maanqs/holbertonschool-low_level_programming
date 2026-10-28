#include "main.h"

/**
 *_islower	-	Verifie si cest une min.
 *
 * @c: le caractere a verifier
 *
 * return: 1 si c est une minuscule, sinon 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

