#include "libft.h"

static size_t	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t		numlen;
	size_t		sign;
	char		*result;
	long long	n1;

	numlen = get_num_len(n);
	if (!(result = (char *)malloc(sizeof(char) * (numlen + 1))))
		return (NULL);
	result[numlen] = '\0';
	sign = 0;
	n1 = (long long)n;
	if (n1 < 0)
	{
		n1 *= -1;
		result[0] = '-';
		sign = 1;
	}
	while (numlen-- > sign)
	{
		result[numlen] = (n1 % 10) + '0';
		n1 /= 10;
	}
	return (result);
}
