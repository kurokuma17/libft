/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:14:43 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 14:03:26 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_memccpy1(void)
{
	const char *src = "Hello World12345";
	char dst1[20] = "";
	char dst2[20] = "";

	char	*r1;
	r1 = memccpy(dst1, src, 'd', strlen(src));
	char	*r2;
	r2 = ft_memccpy(dst2, src, 'd', strlen(src));
	if (strcmp(dst1, dst2) == 0)
		return (true);
	else
		return (false);
}

static int test_memccpy2(void) 
{
	char	src[] = "basic test of memccpy !";
	char	dst[22];

	memset(dst, 0, sizeof(dst));

	char	*r1 = memccpy(dst, src, 'm', 22);
	char	*r2 = ft_memccpy(dst, src, 'm', 22);

	if (r1 == r2)
		return (true);
	else
		return (false);
}

static int test_memccpy3(void) 
{
	char	dst1[15] = {'\0'};
	char	dst2[15] = {'\0'};
	void	*r1 = memccpy(dst1, "", 0, 0);
	void	*r2 = ft_memccpy(dst2, "", 0, 0);
	if (r1 == r2)
		return (true);
	else
		return (false);
}
static int test_memccpy4(void) 
{
	int src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int dst1[10] = {0};
	int dst2[10] = {0};
	void *r1, *r2;

	r1 = ft_memccpy(dst1, src, 127, sizeof(int)*10);
	r2 = memccpy(dst2, src, 127, sizeof(int)*10);

	if (r1 == NULL && r2 == NULL && memcmp(dst1, dst2, sizeof(int)*10) == 0)
		return (true);
	else
		return (false);
}


void test_memccpy_all(void)
{
	if (test_memccpy1() == true && test_memccpy2() == true 
		&& test_memccpy3() == true && test_memccpy4() == true)
	{
		pwhite();
		printf("ft_memccpy: ");
		pgreen();
		printf("0K\n");
	}
	else
	{
		pwhite();
		printf("ft_memccpy: ");
		pred();
		printf("FAIL\n");
	}
}
