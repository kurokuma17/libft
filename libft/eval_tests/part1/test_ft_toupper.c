/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:54:40 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/01 20:57:11 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int	test_toupper1(void)
{
	unsigned char	c; 

	c = 0;
	while (c < 150 && ft_toupper(c) == toupper(c))
		c++;
	if (c == 150)
		return(1);
	else
		return(0);
}

static int	test_toupper2(void)
{
	unsigned char	c; 

	c = 0;
	while (c < 120 && ft_toupper(c) == toupper(c))
		c++;
	if (c == 120)
		return(1);
	else
		return(0);
}

void	test_toupper_all(void)
{
	if (test_toupper1() + test_toupper2() == 2)
	{
		pwhite();
		printf("ft_toupper: ");
		pgreen();
		printf("0K\n");
	}
	else
	{
		pwhite();
		printf("ft_toupper: ");
		pred();
		printf("FAIL\n");
	}
}
