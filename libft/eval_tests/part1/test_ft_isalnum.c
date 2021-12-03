/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:26:32 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 16:00:44 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int	test_isalnum1(void)
{
	unsigned char	c;

	c = 0;
	while (c < 150 && ft_isalnum(c) == isalnum(c))
		c++;
		if (c == 150)
		return(true);
	else
		return(false);
}

void	test_isalnum_all(void)
{
	if (test_isalnum1() == 1)
	{
		pwhite();
		printf("ft_isalnum: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_isalnum: ");
		pred();
		printf("\tFAIL\n");
	}
}

