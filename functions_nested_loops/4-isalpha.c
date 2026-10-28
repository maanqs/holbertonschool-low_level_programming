#include "main.h"

/**
 * _isalpha	-	reconnais un caractere.
 *
 * @c: le caractere a verifier.
 *
 * Return:	1 sinon 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && 'z') || (c >= 'A' && 'Z'))
		return (1);
	else
		return (0);
}
