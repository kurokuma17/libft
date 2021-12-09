/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:15:02 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/09 20:40:30 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void test_itoa_all(void)
{
	int test_passed = 0;

	if (strcmp(ft_itoa(-666), "-666") == 0)
		test_passed++;
	if (strcmp(ft_itoa(666), "666") == 0)
		test_passed++;
	if (strcmp(ft_itoa(-0), "0") == 0)
		test_passed++;
	if (strcmp(ft_itoa(0), "0") == 0)
		test_passed++;
	if (strcmp(ft_itoa(INT_MIN), "-2147483648") == 0)
		test_passed++;
	if (strcmp(ft_itoa(INT_MAX), "2147483647") == 0)
		test_passed++;
	if (memcmp(ft_itoa(INT_MIN), "-2147483648", 12) == 0)
		test_passed++;

	if (test_passed == 7)
	{
		pwhite();
		printf("ft_itoa: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_itoa: ");
		pred();
		printf("\tFAIL\n");
	}
}