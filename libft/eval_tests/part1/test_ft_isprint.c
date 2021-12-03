/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:25:03 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 16:03:11 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int	test_isprint1(void)
{
	unsigned char	c;

	c = 0;
	while (c < 150 && ft_isprint(c) == isprint(c))
		c++;
		if (c == 150)
		return(true);
	else
		return(false);
}

void	test_isprint_all(void)
{
	if (test_isprint1() == 1)
	{
		pwhite();
		printf("ft_isprint: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_isprint: ");
		pred();
		printf("\tFAIL\n");
	}
}

