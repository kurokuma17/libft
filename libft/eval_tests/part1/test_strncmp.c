/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:12:16 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/06 22:27:12 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strncmp1(void)
{
	int test_passed = 0;

	if (strncmp("hello", "hello", 5) == 0 && ft_strncmp("hello", "hello", 5) == 0)
		test_passed++;
	if (strncmp("hello", "hellOO", 4) == 0 && ft_strncmp("hello", "hellOO", 4) == 0)
		test_passed++;
	if (strncmp("hello", "hellO", 5) > 0 && ft_strncmp("hello", "hellO", 5) > 0)
 		test_passed++;
	if (strncmp("\0", "\200", 1) < 0 && ft_strncmp("\0", "\200", 1) < 0)
 		test_passed++;
	if (test_passed == 4)
		return (true);
	else
		return (false);

}

static int test_strncmp2(void)
{
	int test_passed = 0;

	if (strncmp("hello", "", 5) > 0 && ft_strncmp("hello", "", 5) > 0)
		test_passed++;
	if (strncmp("", "0hellO", 0) == 0 && ft_strncmp("", "0hellO", 0) == 0)
		test_passed++;
	if (strncmp("", "", 1) == 0 && ft_strncmp("", "", 1) == 0)
		test_passed++;
	if (strncmp("yolo!\0B", "yolo!\0A", 8) == 0 && ft_strncmp("yolo!\0B", "yolo!\0A", 8) == 0)
		test_passed++;
	if (test_passed == 4)
		return (true);
	else
		return (false);

}

void	test_strncmp_all(void)
{
	if (test_strncmp1() == true && test_strncmp2() == true)
	{
		pwhite();
		printf("ft_strncmp: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strncmp: ");
		pred();
		printf("\tFAIL\n");
	}

}