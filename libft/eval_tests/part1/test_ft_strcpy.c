/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:01:04 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 15:57:03 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strcpy1(void)
{
	const char *src = "Hello";
	char dst1[10] = "World12345";
	char dst2[10] = "World12345";

	strcpy(dst1, src);
	ft_strcpy(dst2, src);
	if (strcmp(dst1, dst2) == 0)
		return (true);
	else
		return (false);
}

static int test_strcpy2(void)
{
	char	*src = "zero test !";
	char	dst1[80];
	size_t	len = strlen(src);

	memset(dst1, 'A', 79);
	ft_strcpy(dst1, src);
	if (dst1[len] == '\0')
		return (true);
	else
		return (false);

}

static int test_strcpy3(void)
{
	char	*src = "";
	char	dst1[30] = "Not an empty string";
	char	dst2[30] = "Not an empty string";
	strcpy(dst1, src);
	ft_strcpy(dst2, src);
	if (strcmp(dst1, dst2) == 0)
		return (true);
	else
		return (false);
}

static int test_strcpy4()
{
	char	*src = "AAAA";
	char	dst1[80];
	char	dst2[80];

	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));

	strcpy(dst1, src);
	ft_strcpy(dst2, src);
	if (memcmp(dst1, dst2, 20) == 0)
		return (true);
	else
		return (false);


}

void	test_strcpy_all(void)
{
	if (test_strcpy1() == true && test_strcpy2() == true && \
		test_strcpy3() == true && test_strcpy4() == true)
	{
		pwhite();
		printf("ft_strcpy: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strcpy: ");
		pred();
		printf("\tFAIL\n");
	}
}
