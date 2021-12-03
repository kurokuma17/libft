/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:24:25 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 11:38:11 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int	test_strdup1(void)
{
	const char *src = "Duplicate this string";

	char *dst1 = strdup(src);
	char *dst2 = ft_strdup(src);
	if (strcmp(dst1, dst2) == 0 && strcmp(src, dst2) == 0 && dst2 != src)
		return (true);
	else
		return (false);
}

static int	test_strdup2(void)
{
	char *dst1 = strdup("");
	char *dst2 = ft_strdup("");
	if (strcmp(dst1, dst2) == 0)
		return (true);
	else
		return (false);
}

void	test_strdup_all(void)
{
	if (test_strdup1() == true && test_strdup2() == true)
	{
		pwhite();
		printf("ft_strdup: ");
		pgreen();
		printf("0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strdup: ");
		pred();
		printf("FAIL\n");
	}
}
