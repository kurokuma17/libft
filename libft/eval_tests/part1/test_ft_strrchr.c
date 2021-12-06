/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:18:43 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/06 20:18:56 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strrchr1()
{
	char	*s = "the cake is a lie !\0I'm hidden lol\r\n";
	char	*r1 = strrchr(s, ' ');
	char	*r2 = ft_strrchr(s, ' ');

	if (r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strrchr2()
{
	char	*s = "the cake is a lie !\0I'm hidden lol\r\n";
	char	*r1 = strrchr(s, '\0');
	char	*r2 = ft_strrchr(s, '\0');

	if (r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strrchr3()
{
	char	*s = "the cake is a lie !\0I'm hidden lol\r\n";
	char	*r1 = strrchr(s, '*');
	char	*r2 = ft_strrchr(s, '*');

	if (r1 == r2)
		return (true);
	else
		return (false);
}
static int test_strrchr4()
{
	char	*s = "the cake is a lie !\0I'm hidden lol\r\n";
	char	*r1 = strrchr(s, 'o');
	char	*r2 = ft_strrchr(s, 'o');

	if (r1 == r2)
		return (true);
	else
		return (false);
}

void	test_strrchr_all(void)
{
	if (test_strrchr1() == true && test_strrchr2() == true && 
		test_strrchr3() == true && test_strrchr4() == true)
	{
		pwhite();
		printf("ft_strrchr: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strrchr: ");
		pred();
		printf("\tFAIL\n");
	}
}
