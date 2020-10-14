#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int main()
{
	printf("%d\n",toupper('A'));
	printf("%d\n",ft_toupper('A'));
	return 0;
}