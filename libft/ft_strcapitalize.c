/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:54:09 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/13 20:37:19 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		while (!ft_isalpha(str[i]))
			i++;
		if (ft_islower(str[i]))
			str[i] = ft_toupper(str[i]);
		while (!ft_isspace(str[i]))
		{
			str[i] = ft_tolower(str[i]);	
			i++;
		}
	}
	return (str);
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_putendl(ft_strcapitalize(av[1]));
	}
}