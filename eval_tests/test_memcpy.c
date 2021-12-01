/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:30:46 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/01 12:40:23 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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

void test_memcpy_all(void)
{
	if (test_memcpy1() == true)//&& test_memcpy2() == true)
		printf("ft_memcpy: OK\n");
	else
		printf("ft_memcpy: FAIL\n");
}
int main(void)
{
	test_memcpy_all();
}