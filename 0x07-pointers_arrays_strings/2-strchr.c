#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to find
 * Return: pointer to character to find or NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
		return (s);
		}
	}
	if (c  == '\0')
	{
		return (s);
	}
	return (0);
}

int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}