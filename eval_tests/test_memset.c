/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:17:04 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/30 19:19:44 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

static int test_memset1(void)
{
	const char *s = "Hello";
	char dst1[10] = "World12345";
	char dst2[10] = "World12345";
	memset(strcpy(dst1, s), 'i', strlen(s));
	ft_memset(strcpy(dst2, s), 'i', strlen(s));
	if (memcmp(dst1, dst2, 10) == 0 && memcmp(dst1 + 6, dst2 + 6, 4) == 0)
		return (true);
	else
		return (false);
}
static int test_memset2(void)
{
	int arr1[] = {13, 7, 8, 2, 5};
    int arr2[] = {13, 7, 8, 2, 5};
    ft_memset(arr1, 100, sizeof(int)*5);
    memset(arr2, 100, sizeof(int)*5);
	if (memcmp(arr1, arr2, sizeof(int)*5) == 0)
		return (true);
	else
		return (false);
}
void test_memset_all(void)
{
	if (test_memset1() == true && test_memset2() == true)
		printf("ft_memset: OK\n");
	else
		printf("ft_memset: FAIL\n");
}
int main(void)
{
	test_memset_all();
}