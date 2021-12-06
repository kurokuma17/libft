/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:54:22 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/06 20:15:37 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strchr1()
{
	char	*s = "the cake is a lie !\0I'm hidden lol\r\n";
	char	*r1 = strchr(s, ' ');
	char	*r2 = ft_strchr(s, ' ');

	if (r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strchr2()
{
	char	*s = "the cake is a lie !\0I'm hidden lol\r\n";
	char	*r1 = strchr(s, '\0');
	char	*r2 = ft_strchr(s, '\0');

	if (r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strchr3()
{
	char	*s = "the cake is a lie !\0I'm hidden lol\r\n";
	char	*r1 = strchr(s, '*');
	char	*r2 = ft_strchr(s, '*');

	if (r1 == r2)
		return (true);
	else
		return (false);
}
static int test_strchr4()
{
	char	*s = "the cake is a lie !\0I'm hidden lol\r\n";
	char	*r1 = strchr(s, 'o');
	char	*r2 = ft_strchr(s, 'o');

	if (r1 == r2)
		return (true);
	else
		return (false);
}

void	test_strchr_all(void)
{
	if (test_strchr1() == true && test_strchr2() == true && 
		test_strchr3() == true && test_strchr4() == true)
	{
		pwhite();
		printf("ft_strchr: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strchr: ");
		pred();
		printf("\tFAIL\n");
	}
}
