/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:13:59 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/12 23:49:42 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	char			*res;

	if (!s || !*s)
		return ("\0");
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j != 0)
		j--;
	res = (char *)malloc(sizeof(char) * (j - i + 2));
	if (res == NULL)
		return (NULL);
	res = ft_strsub(s, i, j - i + 1);
	return (res);
}
