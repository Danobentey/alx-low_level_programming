#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *leet(char *str)
{
    int i, j;
    char leet_map[] = "4433007711"; // Mapping for a, e, o, t, l (and their uppercase equivalents)

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; "aeotlAEOTL"[j] != '\0'; j++)
        {
            if (str[i] == "aeotlAEOTL"[j])
            {
                str[i] = leet_map[j];
                break;
            }
        }
    }

    return str;
}

