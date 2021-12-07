/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:24:31 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 15:24:58 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void test_strdel_all(void)
{
	char	*str = (char *)malloc(42);

	ft_strdel(&str);
	if (str == NULL)
	{
		pwhite();
		printf("ft_strdel: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strdel: ");
		pred();
		printf("\tFAIL\n");
	}
}