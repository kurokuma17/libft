/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:48:35 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 14:59:16 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void test_memdel_all(void)
{
	void	*mem = malloc(42);

	ft_memdel(&mem);
	if (mem == NULL)
	{
		pwhite();
		printf("ft_memdel: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_memdel: ");
		pred();
		printf("\tFAIL\n");
	}
}