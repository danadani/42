#include "libft.h"
#include <stdlib.h>
#include <stdio.h>


int ft_atoi(const char *str)
{
	unsigned int i;
	int sign;
	int num;

	i = 0;
	sign = 1;
	num = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}		
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num < 0 && sign < 0)
			return (0);
		if (num < 0 && sign > 0)
			return (-1);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (sign * num);
}

int main()
{
	char a[] = "    –2147483647";

	printf("my: %d\n", atoi(a));

	char b[] = "    –2147483647";

	printf("lib: %d\n", ft_atoi(b));
	return (0);
}