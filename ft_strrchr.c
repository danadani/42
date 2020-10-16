#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *str;
	char *tmp;

	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == c)
			tmp = str;
		str++;
	}
	return (tmp);
}
