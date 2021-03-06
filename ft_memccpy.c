#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dest;
	unsigned char *sorc;
	int i;

	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		dest[i] = sorc[i];
		if (sorc[i] == (unsigned char)c)
			return(dst + i + 1);
		n--;
		i++;
	}
	return (0);
}
