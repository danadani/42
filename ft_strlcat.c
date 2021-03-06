/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <haelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:59:15 by haelee            #+#    #+#             */
/*   Updated: 2020/10/08 21:47:11 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t d_len;
	size_t s_len;
	size_t i;
	size_t j;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	if (dstsize < d_len + 1)
		return (dstsize + s_len);
	if (dstsize > d_len + 1)
	{
		j = d_len;
		while(src && (j + 1 < dstsize))
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	return (d_len + s_len);
}
