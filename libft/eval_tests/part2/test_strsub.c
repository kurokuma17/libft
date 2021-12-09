/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:35:30 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/09 16:49:18 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strsub1(void)
{
	char *str = "You don't need greed because you have it all!";
	size_t len = 5;
	char *res = ft_strsub(str, 15, len);
	if (strcmp(res, "greed") == 0)
		return (true);
	else
		return (false);
}

static int test_strsub2(void)
{
	char *str = "You don't need greed because you have it all!";
	size_t len = strlen(str);
	char *res = ft_strsub(str, 0, len);
	if (strcmp(res, str) == 0)
		return (true);
	else
		return (false);
}

static int test_strsub3(void)
{
	char *str = "You don't need greed because you have it all!";
	char *res = ft_strsub(str, 10, 0);
	if (strcmp(res, "") == 0)
		return (true);
	else
		return (false);
}

static int test_strsub4(void)
{
	char *str = "You don't need greed because you have it all!";
	size_t len = strlen(str);
	char *res = ft_strsub(str, 0, len);
	if (memcmp(res, str, len + 1) == 0)
		return (true);
	else
		return (false);
}

void	test_strsub_all(void)
{
	if (test_strsub1() == true && test_strsub2() == true &&
		test_strsub3() == true && test_strsub4() == true)
	{
		pwhite();
		printf("ft_strsub: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strsub: ");
		pred();
		printf("\tFAIL\n");
	}
}