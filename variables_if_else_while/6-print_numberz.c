#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>

/**
*main	-	Affiche	aussi	en	base	de	10.
*
*Return:	Always	0	(Success)
*/
int	main(void)
{
int	number;
for	(number = 0; number < 10; number++)
{
putchar(number + '0');
}
putchar('\n');
return	(0);
}
