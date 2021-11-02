/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:56:13 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/02 18:22:57 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	if (len < (unsigned int)ft_strlen(src))
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < (unsigned int)ft_strlen(src))
		{
			dst[i] = src[i];
			i++;
		}
		while (i < len)
		{	
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
