#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char	*str;
    size_t	len;

	if (!s1 || !s2)
		return (0);
    len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (0);
    ft_strlcat(str, s1, len);
	ft_strlcat(str, s2, len);
    str[len - 1] = '\0';
	return (str);
}
