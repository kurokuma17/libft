/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:35:21 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/14 20:21:10 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	buf;
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dst);
	j = 0;
	buf = dstsize - ft_strlen(dst) - 1;
	if (buf > ft_strlen(src))
	{
		while (src[j])
			dst[i++] = src[j++];
	}
	else
	{
		while (buf < 0)
		{
			dst[i++] = src[j++];
			buf--;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}
