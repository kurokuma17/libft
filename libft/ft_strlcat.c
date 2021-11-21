/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:35:21 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/20 18:09:00 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	buf;
	size_t	i;
	size_t	j;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	buf = dstsize - dstlen - 1;
	if (i > dstsize)
		return (dstsize + ft_strlen(src));
	if (buf >= ft_strlen(src))
	{
		while (src[j])
			dst[i++] = src[j++];
	}
	else if (buf < ft_strlen(src))
	{
		while (buf--)
			dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (dstlen + ft_strlen(src));
}
