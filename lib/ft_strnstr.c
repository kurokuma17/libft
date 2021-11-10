/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:53:42 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/04 16:55:10 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	i = ft_strlen(needle);
	if (i == 0)
		return ((char *)haystack);
	else
	{
		while (*needle && *haystack && len > 0)
		{
			if (*needle == *haystack)
				needle++;
			haystack++;
			len--;
		}
		if (*needle == '\0')
			return ((char *)(haystack - i));
		else
			return (0);
	}
}
