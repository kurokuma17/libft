/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:37:53 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 16:10:04 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strncpy1(void)
{
	char	*src = "copy this simple string\n\r";
	char	dst1[30];
	char	dst2[30];
	char	buff[30];
	size_t	max = 12;

	memset(dst1, 'a', sizeof(dst1));
	memset(dst2, 'a', sizeof(dst2));
	memset(buff, 'b', sizeof(buff));

	strncpy(dst1, src, max);
	ft_strncpy(dst2, src, max);
	char *r1 = strncpy(buff, src, max);
	char *r2 = ft_strncpy(buff, src, max);
	if (memcmp(dst1, dst2, 29) == 0 && r1 == r2)
		return (true);
	else
		return (false);

}

static int test_strncpy2(void)
{
	char	*src = "";
	char	dst1[30];
	char	dst2[30];
	size_t	max = 29;

	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));

	strncpy(dst1, src, max);
	ft_strncpy(dst2, src, max);
	if (!memcmp(dst1, dst2, 29))
		return (true);
	else
		return (false);

}
static int test_strncpy3(void)
{
	char	*src = "copy this string";
	char	dst1[30];
	char	dst2[30];
	size_t	max = 30;

	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));

	strncpy(dst1, src, max);
	ft_strncpy(dst2, src, max);
	if (memcmp(dst1, dst2, max) == 0)
		return (true);
	else
		return (false);
}

static int test_strncpy4(void)
{
	char	*src = "this is a string with a \0 hidden inside";
	char	dst1[50];
	char	dst2[50];
	size_t	max = 31;

	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));

	strncpy(dst1, src, max);
	ft_strncpy(dst2, src, max);
	if (strcmp(dst1, dst2) == 0)
		return (true);
	else
		return (false);

}
static int test_strncpy5(void)
{
	char	*src = "AAAAAAAAAAAA";
	char	dst1[] = "BBBBBBBBBBBBBBBBBBBB";
	char	dst2[] = "BBBBBBBBBBBBBBBBBBBB";
	size_t	len = strlen(dst1);

	strncpy(dst1, src, 2);
	ft_strncpy(dst2, src, 2);
	for (size_t i = 0; i < len; i++)
		if (dst1[i] == dst2[i]) 
			return (true);
	return (false);
}

void	test_strncpy_all(void)
{
	if (test_strncpy1() == true && test_strncpy2() == true && 
		test_strncpy3() == true && test_strncpy4() == true &&
		test_strncpy5() == true)
	{
		pwhite();
		printf("ft_strncpy: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strncpy: ");
		pred();
		printf("\tFAIL\n");
	}
}
