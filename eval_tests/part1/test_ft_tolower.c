/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:57:04 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/24 16:16:08 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libftest.h"

static int	test_tolower1(void)
{
	unsigned char	c; 

	c = 0;
	while (c < 150 && ft_tolower(c) == tolower(c))
		c++;
	if (c == 150)
		return(1);
	else
		return(0);
}

static int	test_tolower2(void)
{
	unsigned char	c; 

	c = 0;
	while (c < 120 && ft_tolower(c) == tolower(c))
		c++;
	if (c == 120)
		return(1);
	else
		return(0);
}

void	test_tolower_all(void)
{
	if (test_tolower1() + test_tolower2() == 2)
	{
		pwhite();
		printf("ft_tolower: ");
		pgreen();
		printf("0K\n");
	}
	else
	{
		pwhite();
		printf("ft_tolower: ");
		pred();
		printf("FAIL\n");
	}
}
