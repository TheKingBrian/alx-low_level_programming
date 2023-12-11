#include "main.h"
#include <string.h>
/**
 * _strstr - looks for string values
 * @haystack: pointer to string
 * @needle: substring to be located
 * Return: needs a stringer
 */
char *_strstr(char *haystack, char *needle)
{
char *or_haystack = haystack, *or_needle = needle;
while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (or_haystack);
}
needle = or_needle;
or_haystack++;
haystack = or_haystack;
}
return (0);
}
