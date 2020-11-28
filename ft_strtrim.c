#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
    size_t		front;
	size_t		end;

	if (!s1 || !set)
		return (0);
	front = 0;
	while (s1[front] != 0 && ft_strchr(set, s1[front]))
		front++;
	end = ft_strlen(s1 + front);
	while (end != 0 && ft_strchr(set, s1[front + end - 1]))
		end--;
	str = (char*)malloc(sizeof(char) * (end + 1));
	if (str == 0)
		return ((void*)0);
	str[end] = 0;
	while (end-- != 0)
		str[front] = s1[front + end];
	return (str);
}
