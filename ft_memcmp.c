#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    int i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    while (n > 0)
    {
        if (str1[i] > str2[i])
            return (1);
        else if (str1[i] < str2[i])
            return (-1);
        i++;
        n--;
    }
    return (0);
}

int main()
{
    char me[10] = "ILoveYou";
    char you[10] = "YouLoveMe";
    
    printf("my: %d\n", ft_memcmp(me+1, you+3, 5));
    printf("lib: %d\n", memcmp(me+1, you+3, 5));

    return (0);
}