/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:19:38 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 14:47:41 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_memalloc1(void)
{
	size_t size = 1024;
	void *mem1 = malloc(size);
	memset(mem1, 0, size);
	void *mem2 = ft_memalloc(1024);
	
	if (memcmp(mem1, mem2, size) == 0)
		return (true);
	else
		return (false);	
	free(mem1);
	free(mem2);
}

static int test_memalloc2(void)
{
	void *mem = ft_memalloc(-1);
	if (mem == NULL)
		return (true);
	else
		return (false);	
}

void	test_memalloc_all(void)
{
	if (test_memalloc1() == true && test_memalloc2() == true)
	{
		pwhite();
		printf("ft_memalloc: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_memalloc: ");
		pred();
		printf("\tFAIL\n");
	}
}