/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:34:32 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/30 19:00:23 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

static int test_bzero1(void)
{
	const char *s = "Hello";
	char dst1[10] = "World12345";
	char dst2[10] = "World12345";
	bzero(strcpy(dst1, s), strlen(s));
	ft_bzero(strcpy(dst2, s), strlen(s));
	if (memcmp(dst1, dst2, 10) == 0 && memcmp(dst1 + 6, dst2 + 6, 4) == 0)
		return (true);
	else
		return (false);
}
static int test_bzero2(void)
{
	int arr1[] = {13, 7, 8, 2, 5};
    int arr2[] = {13, 7, 8, 2, 5};
    ft_bzero(arr1, sizeof(int)*5);
    bzero(arr2, sizeof(int)*5);
	if (memcmp(arr1, arr2, sizeof(int)*5) == 0)
		return (true);
	else
		return (false);
}
void test_bzero_all(void)
{
	if (test_bzero1() == true && test_bzero2() == true)
		printf("ft_bzero: OK\n");
	else
		printf("ft_bzero: FAIL\n");
}
int main(void)
{
	test_bzero_all();
}