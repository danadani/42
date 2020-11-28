#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*str;
    size_t	i;
	size_t	size;
 
	if (s == NULL)
		return (0);
	size = ft_strlen(s);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	i = 0;
	if (start < size)
	{
		while (i < len)
		{
			str[i] = s[start];
			start++;
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
