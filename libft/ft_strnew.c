/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:57:32 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/14 20:09:49 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = (char *)malloc(sizeof(char) * size);
	if (new == NULL)
		return (NULL);
	while (i < size)
		new[i++] = '\0';
	return (new);
}
