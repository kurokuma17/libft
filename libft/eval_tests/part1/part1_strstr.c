/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:25:02 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/06 20:42:38 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strstr1(void)
{
	char *needle = "hello";
	char *haystack = "hello from the other side hello hello";
	char *r1 = strstr(haystack, needle);
	char *r2 = ft_strstr(haystack, needle);

	if (r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strstr2(void)
{
	char *haystack = "hello";
	char *needle = "hello from the other side hello hello";
	char *r1 = strstr(haystack, needle);
	char *r2 = ft_strstr(haystack, needle);

	if (r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strstr3(void)
{
	char *needle = "huomenta";
	char *haystack = "hello from the other side hello hello";
	char *r1 = strstr(haystack, needle);
	char *r2 = ft_strstr(haystack, needle);

	if (r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strstr4(void)
{
	char *needle = "";
	char *haystack = "hello from the other side hello hello";
	char *r1 = strstr(haystack, needle);
	char *r2 = ft_strstr(haystack, needle);

	if (r1 == r2)
		return (true);
	else
		return (false);

}
static int test_strstr5(void)
{
	char *needle = "hello";
	char *haystack = "";
	char *r1 = strstr(haystack, needle);
	char *r2 = ft_strstr(haystack, needle);

	if (r1 == r2)
		return (true);
	else
		return (false);

}
static int test_strstr6(void)
{
	char *needle = "lol";
	char *haystack = "the cake is a lie !\0I'm hidden lol\r\n";
	char *r1 = strstr(haystack, needle);
	char *r2 = ft_strstr(haystack, needle);

	if (r1 == r2)
		return (true);
	else
		return (false);

}

void	test_strstr_all(void)
{
	if (test_strstr1() == true && test_strstr2() == true && 
		test_strstr3() == true && test_strstr4() == true &&
		test_strstr5() == true && test_strstr6() == true)
	{
		pwhite();
		printf("ft_strstr: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strstr: ");
		pred();
		printf("\tFAIL\n");
	}
}