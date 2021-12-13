/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:24:41 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 16:00:53 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int	test_isdigit1(void)
{
	unsigned char	c;

	c = 0;
	while (c < 150 && ft_isdigit(c) == isdigit(c))
		c++;
		if (c == 150)
		return(true);
	else
		return(false);
}

void	test_isdigit_all(void)
{
	if (test_isdigit1() == true)
	{
		pwhite();
		printf("ft_isdigit: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_isdigit: ");
		pred();
		printf("\tFAIL\n");
	}
}

