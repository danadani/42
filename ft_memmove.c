#include "libft.h"

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
