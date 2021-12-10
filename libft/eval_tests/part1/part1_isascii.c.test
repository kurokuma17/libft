/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:24:09 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 15:58:59 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int	test_isascii1(void)
{
	unsigned char	c;

	c = 0;
	while (c < 150 && ft_isascii(c) == isascii(c))
		c++;
		if (c == 150)
		return(true);
	else
		return(false);
}

void	test_isascii_all(void)
{
	if (test_isascii1() == true)
	{
		pwhite();
		printf("ft_isascii: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_isascii: ");
		pred();
		printf("\tFAIL\n");
	}
}

