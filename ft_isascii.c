#include "libft.h"
#include <stdio.h>
int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

int main()
{
    printf("a is : %d\n", ft_isascii('a'));
    printf("A is : %d\n", ft_isascii('A'));
    printf("2 is : %d\n", ft_isascii('2'));
    printf("  is : %d\n", ft_isascii(' '));
}