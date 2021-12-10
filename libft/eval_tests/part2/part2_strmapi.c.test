/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:04:54 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 17:32:38 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static char testfunc(unsigned int i, char c)
{
	i = i % 26;
	if(isalpha(c) == 1)
		c = c + i;
	return (c);
}

void	test_strmapi_all(void)
{
	char	str1[] = "Hello world! Encrypt this \n";
	char	str2[100];
	size_t	size = strlen(str1);

	for (size_t i = 0; i < size; i++)
		str2[i] = testfunc(i, str1[i]);
	str2[size] = 0;
	char	*res = ft_strmapi(str1, testfunc);
	if (strcmp(res, str2) == 0)
	{
		pwhite();
		printf("ft_strmapi: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strmapi: ");
		pred();
		printf("\tFAIL\n");
	}
}