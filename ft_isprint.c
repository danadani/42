#include "libft.h"
#include <stdio.h>
int ft_isprint(int c)
{
    if (c >= ' ' && c <= '~')
        return (1);
    return (0);
}

int main()
{
    printf("a is : %d\n", ft_isprint('a'));
    printf("A is : %d\n", ft_isprint('A'));
    printf("2 is : %d\n", ft_isprint('2'));
    printf("  is : %d\n", ft_isprint(' '));
}