#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int letter = 97;

while   (letter <= 122)
{
    putchar(letter++);
    putchar('\n');
}
    return 0;
}