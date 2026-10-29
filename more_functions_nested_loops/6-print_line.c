#include "main.h"

/**
*print_line - Dessine une ligne droite avec le caractère dit
*@n: Le nombre de fois que le caractère _ doit être affiché
*Return: void
*/
void print_line(int n)
{
	int i;

	if (n > 0)

	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
