#include <stdlib.h>
#include "lists.h"

char *duplicate_string(const char *str)
{
        unsigned int len = 0;
        const char *temp;
        unsigned int i;

    if (str == NULL)
        return (NULL);

        *temp = str;
        while (*temp != '\0')
        {
        len++;
        temp++;
        }
        *duplicate = malloc((len + 1) * sizeof(char));

        if (duplicate == NULL)
        {
        return NULL;
        }

        for (i = 0; i < len; i++)
        {
        duplicate[i] = str[i];
        }
        duplicate[len] = '\0';

        return duplicate;
}
