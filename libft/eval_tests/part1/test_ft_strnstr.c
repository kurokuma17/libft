/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:44:33 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/06 21:02:00 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strnstr1(void)
{
	char *needle = "hello";
	char *haystack = "hello from the other side hello hello";
	size_t len = strlen(haystack);
	char *r1 = strnstr(haystack, needle, len);
	char *r2 = ft_strnstr(haystack, needle, len);

	if (r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strnstr2(void)
{
	char *needle = "hellO";
	char *haystack = "hello from the other side hello hello";
	size_t len = strlen(haystack);
	char *r1 = strnstr(haystack, needle, len);
	char *r2 = ft_strnstr(haystack, needle, len);

	if (r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strnstr3(void)
{
	char *needle = "side";
	char *haystack = "hello from the other side hello hello";
	char *r1 = strnstr(haystack, needle, 5);
	char *r2 = ft_strnstr(haystack, needle, 5);

	if (r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strnstr4(void)
{
	char *needle = "abcdefghijklmnop";
	char *haystack = "abcdef";
	size_t len = strlen(haystack);
	char *r1 = strnstr(haystack, needle, len);
	char *r2 = ft_strnstr(haystack, needle, len);

	if (r1 == r2)
		return (true);
	else
		return (false);

}
static int test_strnstr5(void)
{
	char *needle = "hello";
	char *haystack = "";
	char *r1 = strnstr(haystack, needle, strlen(needle));
	char *r2 = ft_strnstr(haystack, needle, strlen(needle));

	if (r1 == r2)
		return (true);
	else
		return (false);

}
static int test_strnstr6(void)
{
	char *needle = "";
	char *haystack = "hello from the other side hello hello";
	char *r1 = strnstr(haystack, needle, strlen(haystack));
	char *r2 = ft_strnstr(haystack, needle, strlen(haystack));

	if (r1 == r2)
		return (true);
	else
		return (false);

}
static int test_strnstr7(void)
{
	char *needle = "lol";
	char *haystack = "the cake is a lie !\0I'm hidden lol\r\n";
	char *r1 = strnstr(haystack, needle, 100);
	char *r2 = ft_strnstr(haystack, needle, 100);

	if (r1 == r2)
		return (true);
	else
		return (false);

}

void	test_strnstr_all(void)
{
	if (test_strnstr1() == true && test_strnstr2() == true && 
		test_strnstr3() == true && test_strnstr4() == true &&
		test_strnstr5() == true && test_strnstr6() == true &&
		test_strnstr7())
	{
		pwhite();
		printf("ft_strnstr: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strnstr: ");
		pred();
		printf("\tFAIL\n");
	}
}