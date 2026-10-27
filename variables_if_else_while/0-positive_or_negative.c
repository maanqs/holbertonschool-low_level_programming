#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main	-	Assigns	a	random	number	to	n	each	time	it	is	executed,
 * and	prints	whether	the	number	is	positive,	zero,	or	negative.
 * Return:	Always	0	(Success)
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if	(n	>	0)
	{
		printf("%d	is	positive\n",	n);
	}
	if	(n	==	0)
	{
		printf("%d	is	zero\n",	n);
	}
	if	(n	<	0)
	{
		printf("%d	is	negative\n",	n);
	}

	return (0);

}
