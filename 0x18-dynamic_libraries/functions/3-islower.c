#include "stdio.h"
/**
 * _islower - tracks lowercase
 * @c: letter input by user
 * Return: 1 is for all lowercase
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
