#include "libft.h"
#include <stdio.h>
int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int main()
{
    printf("a is : %d\n", ft_isdigit('a'));
    printf("A is : %d\n", ft_isdigit('A'));
    printf("2 is : %d\n", ft_isdigit('2'));
    printf("  is : %d\n", ft_isdigit(' '));
}