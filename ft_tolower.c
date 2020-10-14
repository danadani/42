#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int main()
{
	printf("%d\n",tolower(' '));
	printf("%d\n",ft_tolower(' '));
	return 0;
}