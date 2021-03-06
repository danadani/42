#include "libft.h"

static void	change_char(int n, int fd)
{
	if (n >= 10)
	{
		change_char(n / 10, fd);
		change_char(n % 10, fd);
	}
	else if (n >= 0)
	{
		n += '0';
		write(fd, &n, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	change_char(n, fd);
}
