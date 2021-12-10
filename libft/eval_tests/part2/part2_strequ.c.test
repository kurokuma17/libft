/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:46:36 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 17:52:17 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void	test_strequ_all(void)
{
	int test_passed = 0;
	if (ft_strequ("hello", "hello") == 1)
		test_passed++;
	if (ft_strequ("hello", "hellO") == 0)
		test_passed++;
	if (ft_strequ("hello", "helloo") == 0)
		test_passed++;
	if (ft_strequ("", "hello") == 0)
		test_passed++;
	if (ft_strequ("", "") == 1)
		test_passed++;
	if (test_passed == 5)
	{
		pwhite();
		printf("ft_strequ: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strequ: ");
		pred();
		printf("\tFAIL\n");
	}

}