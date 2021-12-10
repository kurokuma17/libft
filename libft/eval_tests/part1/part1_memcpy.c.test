/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:30:46 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 16:02:04 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_memcpy1(void)
{
	const char *src = "Hello";
	char dst1[10] = "World12345";
	char dst2[10] = "World12345";

	memcpy(dst1, src, strlen(src));
	ft_memcpy(dst2, src, strlen(src));
	if (memcmp(dst1, dst2, 10) == 0 && memcmp(dst1 + 6, dst2 + 6, 4) == 0)
		return (true);
	else
		return (false);
}

static int test_memcpy2(void)
{
	int src[5] =  {9, 99, 999, 10, 3};
	int arr1[10] = {13, 7, 8, 2, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {13, 7, 8, 2, 5, 6, 7, 8, 9, 10};

	memcpy(arr1, src, sizeof(int) * 5);
	ft_memcpy(arr2, src, sizeof(int) * 5);
	if (memcmp(arr1, arr2, sizeof(int) * 5) == 0)
		return (true);
	else
		return (false);

}

void	test_memcpy_all(void)
{
	if (test_memcpy1() == true && test_memcpy2() == true)
	{
		pwhite();
		printf("ft_memcpy: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_memcpy: ");
		pred();
		printf("\tFAIL\n");
	}
}
