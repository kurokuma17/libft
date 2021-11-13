/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:51:36 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/08 13:15:08 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(unsigned char *)s && n)
	{
		if (*(unsigned char *)s == c)
			return ((void *)s);
		s++;
		n--;
	}
	return (0);
}
