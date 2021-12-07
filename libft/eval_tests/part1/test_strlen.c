/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:48:55 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 16:02:36 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void		test_strlen_all(void)
{
	int tests_passed = 0;

	if (ft_strlen("12345\0abcdf") == strlen("12345\0abcdf"))
		tests_passed++;
	if (ft_strlen("") == strlen(""))
		tests_passed++;

	if (tests_passed == 2)
	{
		pwhite();
		printf("ft_strlen: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strlen: ");
		pred();
		printf("\tFAIL\n");
	}
}