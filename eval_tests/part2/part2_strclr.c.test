/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:41:52 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 15:51:58 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void  test_strclr_all(void)
{
	char str1[] = "Hello world!\n";
	size_t len = strlen(str1);
	char str2[len];
	memset(str2, 0, len);
	ft_strclr(str1);
	if (memcmp(str1, str2, len) == 0)
	{
		pwhite();
		printf("ft_strclr: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strclr: ");
		pred();
		printf("\tFAIL\n");
	}

}