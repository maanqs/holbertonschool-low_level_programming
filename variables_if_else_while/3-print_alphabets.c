#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main	-	Affiche	l'Alphabet	en	MAJ	et	Min.
 *
 *Return:	Always	0	(success)
 */

int main(void)
{
int	letter	=	97;
int	letter2	=	65;
while	(letter <= 122)
{
putchar(letter++);
}

while	(letter2 <= 90)
{
putchar(letter2++);
}
putchar('\n');

return	(0);


}
