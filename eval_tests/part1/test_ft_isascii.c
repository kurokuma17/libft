/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:24:09 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/24 17:24:31 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libftest.h"

static int	test_isascii1(void)
{
	unsigned char	c;

	c = 0;
	while (c < 150 && ft_isascii(c) == isascii(c))
		c++;
		if (c == 150)
		return(1);
	else
		return(0);
}

void	test_isascii_all(void)
{
	if (test_isascii1() == 1)
	{
		pwhite();
		printf("ft_isascii: ");
		pgreen();
		printf("0K\n");
	}
	else
	{
		pwhite();
		printf("ft_isascii: ");
		pred();
		printf("FAIL\n");
	}
}

