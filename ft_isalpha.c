#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int main()
{
    printf("a is : %d\n", isalpha('a'));
    printf("a is : %d\n", ft_isalpha('a'));
    printf("A is : %d\n", isalpha('A'));
    printf("A is : %d\n", ft_isalpha('A'));
    printf("2 is : %d\n", isalpha(2));
    printf("2 is : %d\n", ft_isalpha(2));
    printf("  is : %d\n", isalpha(' '));
    printf("  is : %d\n", ft_isalpha(' '));

    return 0;
}