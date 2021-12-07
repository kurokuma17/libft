/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:01:28 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 15:23:41 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void	test_strnew_all(void)
{
	size_t size = 100;
	size_t i = 0;
	char *str = ft_strnew(size);
	while (i < size && str[i] == 0)
		i++;
	if (i == size)
	{
		pwhite();
		printf("ft_strnew: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strnew: ");
		pred();
		printf("\tFAIL\n");
	}

}