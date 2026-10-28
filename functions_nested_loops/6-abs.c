#include "main.h"

/**
 * _abs	-		calcule ne nombre absoulu.
 *
 * @n: caractere spe
 *
 *Return: always succes 0 
 *
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);

}
