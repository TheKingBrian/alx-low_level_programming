#include "stdio.h"
/**
 * _isalpha - a to z in analyzed
 * @c: character input by user
 * Return: 0means it doesnt work
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}

