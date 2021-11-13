/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:34:16 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/06 18:35:12 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && ((unsigned char *)src)[i] != c)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (((unsigned char *)src)[i] == c)
	{
		((unsigned char *)dst)[i] = c;
		return (&(dst)[i + 1]);
	}
	else
		return (0);
}
