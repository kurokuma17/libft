/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:56:11 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 18:04:26 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void	test_strnequ_all(void)
{
	int test_passed = 0;
	if (ft_strnequ("hello", "hello", 5) == 1)
		test_passed++;
	if (ft_strnequ("hello", "hellO", 4) == 1)
		test_passed++;
	if (ft_strnequ("hello", "helloo", 5) == 1)
		test_passed++;
	if (ft_strnequ("", "hello", 0) == 1)
		test_passed++;
	if (ft_strnequ("", "", 5) == 1)
		test_passed++;
	if (ft_strnequ("hello123", "hello", 100 == 0))
		test_passed++;
	if (ft_strnequ("Hello", "", 100 == 0))
		test_passed++;
	if (ft_strnequ("Hello", "World", 0) == 1)
		test_passed++;
	if (test_passed == 8)
	{
		pwhite();
		printf("ft_strnequ: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strnequ: ");
		pred();
		printf("\tFAIL\n");
	}

}