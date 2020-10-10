/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <haelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 20:59:41 by haelee            #+#    #+#             */
/*   Updated: 2020/10/10 21:03:29 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_strncmp(const char * s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > i)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main()
{
	char a[] = "aaadaaa";
	char b[] = "aaabaaa";

	printf("lib: %d\n", strncmp(a, b, 7));

	char c[] = "aaadaaa";
	char d[] = "aaabaaa";

	printf("my: %d\n", ft_strncmp(c, d, 7));
	return 0;
}