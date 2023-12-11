/**
 * _strlen - brings back all the string values
 * @s: string
 * Return: character values
 */
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
++len;
return (len);
}
