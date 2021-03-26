#include "holberton.h"

/**
 * binary_to_uint - converts the a binary number to an unsigned int
 * @b: const char variable
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int z = 0, c = 1;
int n;

if (b == '\0')
return (0);

for (n = 0; b[n];)
n++;

for (n -= 1; n >= 0; n--)
{
if (b[n] != '0' && b[n] != '1')
return (0);

z += (b[n] - '0') * c;
c *= 2;
}
return (z);

}
