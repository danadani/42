#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	unsigned char *sorc;
	size_t i;

	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	i = 0;
	if (dst < src)
		while (len > i)
		{
			dest[i] = sorc[i];
			i++;
		}
	else
		while (len > 0)
		{
			dest[len - 1] = sorc[len - 1];
			len--;
		}
	return (dst);
}

int main()
{
	char str[] = "memmove can be very useful......";
	memmove(str + 20, str + 15, 11);
	char str2[] = "memmove can be very useful......";
  	ft_memmove(str2 + 20, str2 + 15, 11);
	printf("After memcpy():  %s\n", str);
	printf("After ft_memcpy():  %s\n", str2);
}