#include "libft.h"
#include <stdio.h>
int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int main()
{
    printf("a is : %d\n", ft_isalnum('a'));
    printf("A is : %d\n", ft_isalnum('A'));
    printf("2 is : %d\n", ft_isalnum('2'));
    printf("  is : %d\n", ft_isalnum(' '));
}