/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:36:07 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 17:04:44 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static char testfunc(char c)
{
	if(ft_isalpha(c) == 1)
		c = c + 2;
	return (c);
}

void	test_strmap_all(void)
{
	char	str1[] = "Hello world! Encrypt this\n";
	char	str2[100];
	size_t	size = strlen(str1);

	for (size_t i = 0; i < size; i++)
		str2[i] = testfunc(str1[i]);
	str2[size] = 0;
	char	*res = ft_strmap(str1, testfunc);
	if (strcmp(res, str2) == 0)
	{
		pwhite();
		printf("ft_strmap: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strmap: ");
		pred();
		printf("\tFAIL\n");
	}
}