#include "libft.h"

char *ft_strdup(const char *s)
{
    char *str;
    size_t len;
    size_t i;

    len = ft_strlen(s);
    str = (char *)malloc(sizeof(char) * len + 1);
    i = 0;
    if (!str)
        return (0);
    while (s[i] != '\0')
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
