#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 *
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int face = 0, yet = 0;

face = n ^ m;
while (face)
{
if (face & 1)
yet++;

face >>= 1;
}
return (yet);
}
