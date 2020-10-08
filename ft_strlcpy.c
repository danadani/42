/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <haelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:17:05 by haelee            #+#    #+#             */
/*   Updated: 2020/10/07 12:24:11 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i;

	i = 0;
	while (src[i] != '\0' && (dstsize > 1))
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	while(src[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char a[7];
	char b[4]="hel";
	char c[7];
	char d[4]="hel";
	printf("return : %lu\n", strlcpy(a,b,5));
	printf("a: %s\n", a);
	printf("a size: %lu\n", sizeof(a));
	printf("--------------------\n");
	printf("return : %lu\n", ft_strlcpy(c,d,5));
	printf("c: %s\n", c);
	printf("c size: %lu\n", sizeof(c));
	return (0);
}
