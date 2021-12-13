/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:58:05 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 16:28:13 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static void testfunc(char *str)
{
	*str = 'F';
}

void test_striter_all(void)
{
	char	str1[] = "Hello world";
	char	str2[100];
	size_t	size = strlen(str1);

	ft_striter(str1, testfunc);
	for (size_t i = 0; i < size; i++)
		testfunc(str2 + i);
	str2[size] = 0;
	if (strcmp(str1, str2) == 0)
	{
		pwhite();
		printf("ft_striter: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_striter: ");
		pred();
		printf("\tFAIL\n");
	}
}