/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:13:59 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/18 16:12:41 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*res;

	if (!s || !*s)
		return ("\0");
	i = 0;
	j = ft_strlen(s) - 1;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j != 0)
		j--;
	res = (char *)malloc(sizeof(char) * (j - i) + 2);
	if (res == NULL)
		return (NULL);
	while (i <= j)
		res[k++] = s[i++];
	res[k] = '\0';
	return (res);
}
