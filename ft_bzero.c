#include "libft.h"
#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;
	int i;

	i = 0; 
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		ptr[i++] = 0x00;
		n--;
	}
}
// int main() 
// {
//   char str[] = "almost every programmer should know memset!";
//   char str2[] = "almost every programmer should know memset!";
//   bzero(str+8, 6);
//   ft_bzero(str2+8, 6);
//   puts(str);
//   printf("-------------\n");
//   printf("%s\n", str2);
//   return 0;
// }