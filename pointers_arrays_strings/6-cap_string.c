#include "main.h"

/**
 * cap_string- is a function that capitalizes all words of a string
 *
 * @str: string argument
 */

char *cap_string(char *str)
{
    int offset = 'a' - 'A';
    int i;
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' '  || str[i - 1] == '\t' || str[i - 1] == '\n'|| str[i - 1] == '.'))
        {
            str[i] -= offset;      
        }
    }
    
     return (str);
    
}

