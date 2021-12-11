/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:24:41 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 16:28:03 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static void testfunc(unsigned i, char *str)
{
	*str = i + '0';
}

void test_striteri_all(void)
{
	char	str1[] = "Hello world";
	char	str2[100];
	size_t	size = strlen(str1);

	ft_striteri(str1, testfunc);
	for (size_t i = 0; i < size; i++)
		testfunc(i, str2 + i);
	str2[size] = 0;
	if (strcmp(str1, str2) == 0)
	{
		pwhite();
		printf("ft_striteri: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_striteri: ");
		pred();
		printf("\tFAIL\n");
	}
}