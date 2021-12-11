/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:39:55 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 16:01:47 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_memchr1(void)
{
	int tests_passed = 0;
	char *str = "1234   56789 !@#$%^&*( ASDFGHJKL";
	char c = ' ';

	if (ft_memchr("", c, 20) == memchr("", c, 20))
		tests_passed++;
	if (ft_memchr(str, c, strlen(str)) == memchr(str, c, strlen(str)))
		tests_passed++;
	if (ft_memchr(str, 'a', strlen(str)) == memchr(str, 'a', strlen(str)))
		tests_passed++;
	if (ft_memchr(str, '\200', strlen(str)) == memchr(str, '\200', strlen(str)))
		tests_passed++;
	if (ft_memchr(str, c, 0) == memchr(str, c, 0))
		tests_passed++;
	str = "find null in this \0 string";
	if (ft_memchr(str, 0, 28) == memchr(str, 0, 28))
			tests_passed++;
	if (tests_passed == 6)
		return (true);
	else
		return (false);

}
void	test_memchr_all(void)
{
	if (test_memchr1() == true)
	{
		pwhite();
		printf("ft_memchr: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_memchr: ");
		pred();
		printf("\tFAIL\n");
	}
}


