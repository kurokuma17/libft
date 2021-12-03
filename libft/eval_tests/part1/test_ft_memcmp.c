/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:47:02 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/02 20:44:59 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int	test_memcmp1(void)
{
	int tests_passed = 0;

	char *s1 = "testing this string\0 which continues";
	char *s2 = "testing this string\0 which continues";
	char *s3 = "testing this string ";

	if (ft_memcmp(s1, s2, strlen(s1) + 1) == memcmp(s1, s2, strlen(s1) + 1))
		tests_passed++;
	if (ft_memcmp(s1, s3, strlen(s3)) == memcmp(s1, s3, strlen(s3)))
		tests_passed++;
	if (ft_memcmp(s1, s3, strlen(s3) - 1) == memcmp(s1, s3, strlen(s3) - 1))
		tests_passed++;
	if (tests_passed == 3)
		return (true);
	else
		return (false);
}

static int	test_memcmp2(void)
{
	int tests_passed = 0;
	if (ft_memcmp("\0", "\0", 1) == memcmp("\0", "\0", 1))
		tests_passed++;
	if (ft_memcmp("\0", "\200", 1) < 0 && memcmp("\0", "\200", 1) < 0)
		tests_passed++;
	if (ft_memcmp("\0", "\200", 0) == memcmp("\0", "\200", 0))
		tests_passed++;
	if (ft_memcmp("a", "A", 2) > 0 && memcmp("a", "A", 2) > 0)
		tests_passed++;
	if (ft_memcmp("", "", 1) == memcmp("", "", 1))
		tests_passed++;
	if (tests_passed == 5)
		return (true);
	else
		return (false);
}

static int	test_memcmp3(void)
{
	int tests_passed = 0;	
	int i1[] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
	int i2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	if (ft_memcmp(i1, i2, sizeof(int)*9) == memcmp(i1, i2, sizeof(int)*9))
		tests_passed++;
	if (ft_memcmp(i1, i2, sizeof(int)*10) == memcmp(i1, i2, sizeof(int)*10))
		tests_passed++;
	if (tests_passed == 2)
		return (true);
	else
		return (false);
}
void	test_memcmp_all(void)
{
	if (test_memcmp1() == true && test_memcmp2() == true && test_memcmp3() == true)
	{
		pwhite();
		printf("ft_memcmp: ");
		pgreen();
		printf("0K\n");
	}
	else
	{
		pwhite();
		printf("ft_memcmp: ");
		pred();
		printf("FAIL\n");
	}
}
