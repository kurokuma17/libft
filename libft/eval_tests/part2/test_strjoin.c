/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:49:32 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/09 17:19:14 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strjoin1(void)
{
	char	*s1 = "Join ";
	char	*s2 = "the ";
	char	*s3 = "dark side!";
	char	*res = ft_strjoin(s1, ft_strjoin(s2, s3));
	if (strcmp(res, "Join the dark side!") == 0)
		return (true);
	else
		return (false);
	free(res);
}

static int test_strjoin2(void)
{
	char	*s1 = "Join ";
	char	*s2 = "the ";
	char	*s3 = "dark side!";
	char	*tmp = ft_strjoin(s1, s2);
	char	*res = ft_strjoin(tmp, s3);
	free(tmp);
	if (strcmp(res, "Join the dark side!") == 0) 
	{
		free(res);
		return (true);
	}
	else
		return (false);
}

static int test_strjoin3(void)
{
	char	*s1 = "You can't, ";
	char	*s2 = "always get, ";
	char	*s3 = "what you want!";
	char	*ref = "You can't, always get, what you want!";
	char	*res = ft_strjoin(ft_strjoin(s1, s2), s3);
	if (memcmp(res, ref, strlen(ref) + 1) == 0) 
	{
		free(res);
		return (true);
	}
	else
		return (false);
}


void	test_strjoin_all(void)
{
	if (test_strjoin1() == true && test_strjoin2() == true &&
		test_strjoin3() == true)
	{
		pwhite();
		printf("ft_strjoin: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strjoin: ");
		pred();
		printf("\tFAIL\n");
	}
}