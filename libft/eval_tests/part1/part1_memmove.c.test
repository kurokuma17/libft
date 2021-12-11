/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:45:59 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 16:02:13 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_memmove1(void)
{
	const char *src = "Hello";
	char dst1[10] = "World12345";
	char dst2[10] = "World12345";

	memmove(dst1, src, strlen(src));
	ft_memmove(dst2, src, strlen(src));
	if (memcmp(dst1, dst2, 10) == 0 && memcmp(dst1 + 6, dst2 + 6, 4) == 0)
		return (true);
	else
		return (false);
}

static int test_memmove2(void)
{
	char	dst1[0xF0];
	char	dst2[0xF0];
	char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	int		size = 0xF0 - 0xF;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));

	memcpy(dst1, data, strlen(data));
	memcpy(dst2, data, strlen(data));
	memmove(dst1 + 3, dst1, size);
	ft_memmove(dst2 + 3, dst2, size);
	if (memcmp(dst1, dst2, size) == 0)
		return (true);
	else
		return (false);
}

static int test_memmove3(void)
{
	int src[5] =  {9, 99, 999, 10, 3};
	int arr1[10] = {13, 7, 8, 2, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {13, 7, 8, 2, 5, 6, 7, 8, 9, 10};

	memmove(arr1, src, sizeof(int) * 5);
	ft_memmove(arr2, src, sizeof(int) * 5);
	if (memcmp(arr1, arr2, sizeof(int) * 5) == 0)
		return (true);
	else
		return (false);

}

void test_memmove_all(void)
{
	if (test_memmove1() == true && test_memmove2() == true && test_memmove3() == true)
	{
		pwhite();
		printf("ft_memmove: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_memmove: ");
		pred();
		printf("\tFAIL\n");
	}
}
