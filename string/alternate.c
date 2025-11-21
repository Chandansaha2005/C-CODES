#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char str[] = "aba aba a";
    int l = 0;
    char prev = '\0';
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            putchar(' ');
            if (prev != '\0')
                if (isupper(prev))
                    l = 1;
                else
                    l = 0;
        }
        else
        {
            if (l == 0)
                putchar(toupper(str[i]));
            else
                putchar(tolower(str[i]));
            prev = (l == 0) ? toupper(str[i]) : tolower(str[i]);
            l = !l;
        }
    }
}
