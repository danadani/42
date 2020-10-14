#include "libft.h"
#include <stdio.h>
#include <string.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
		n--;
	}
	return (dst);
}
int main()
{
	// char str[50] = "GeeksForGeeks is for programming geeks.";
	// char str2[50] = "GeeksForGeeks is for programming geeks.";
	// printf("\nBefore memset(): %s\n", str);	// Before memset(): GeeksForGeeks is for programming geeks.
	// memcpy(str + 14, "hi hello", 2);
	// ft_memcpy(str2 + 14, "hi hello", 2);
	// printf("After memcpy():  %s\n", str);
	// printf("After ft_memcpy():  %s\n", str2);
	char str[] = "memmove can be very useful......";
	memmove(str + 20, str + 15, 11);
	char str2[] = "memmove can be very useful......";
  	ft_memcpy(str2 + 20, str2 + 15, 11);
	printf("After memcpy():  %s\n", str);
	printf("After ft_memcpy():  %s\n", str2);
}