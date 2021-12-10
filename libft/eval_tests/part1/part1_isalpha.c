/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:29:40 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 16:00:48 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int	test_isalpha1(void)
{
	unsigned char	c;

	c = 0;
	while (c < 150 && ft_isalpha(c) == isalpha(c))
		c++;
		if (c == 150)
		return(true);
	else
		return(false);
}

void	test_isalpha_all(void)
{
	if (test_isalpha1() == true)
	{
		pwhite();
		printf("ft_isalpha: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_isalpha: ");
		pred();
		printf("\tFAIL\n");
	}
}

