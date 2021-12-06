/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:33:42 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/06 22:12:11 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strcmp1(void)
{
	int test_passed = 0;

	if (strcmp("hello", "hello") == 0 && ft_strcmp("hello", "hello") == 0)
		test_passed++;
	if (strcmp("Hello", "hello") < 0 && ft_strcmp("Hello", "hello") < 0)
		test_passed++;
	if (strcmp("hello", "hellO") > 0 && ft_strcmp("hello", "hellO") > 0)
 		test_passed++;
	if (strcmp("\0", "\200") < 0 && ft_strcmp("\0", "\200") < 0)
 		test_passed++;
	if (test_passed == 4)
		return (true);
	else
		return (false);

}

static int test_strcmp2(void)
{
	int test_passed = 0;

	if (strcmp("hello", "") > 0 && ft_strcmp("hello", "") > 0)
		test_passed++;
	if (strcmp("", "hello") < 0 && ft_strcmp("", "hello") < 0)
		test_passed++;
	if (strcmp("", "") == 0 && ft_strcmp("", "") == 0)
		test_passed++;
	if (strcmp("yolo!\0B", "yolo!\0A") == 0 && ft_strcmp("yolo!\0B", "yolo!\0A") == 0)
		test_passed++;
	if (test_passed == 4)
		return (true);
	else
		return (false);

}

void	test_strcmp_all(void)
{
	if (test_strcmp1() == true && test_strcmp2() == true)
	{
		pwhite();
		printf("ft_strcmp: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strcmp: ");
		pred();
		printf("\tFAIL\n");
	}
}