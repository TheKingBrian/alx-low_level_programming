#include "main.h"
#include <stddef.h>
/**
 * _strchr - finds the right character
 * @s: pointer to string
 * @c: character to be located
 * Return: shows the pointer
 */
char *_strchr(char *s, char c)
{
char *isFound = NULL;
while (*s != '\0')
{
if (*s == c)
{
isFound = s;
break;
}
++s;
}
if (*s == c)
isFound = s;
return (isFound);
}
