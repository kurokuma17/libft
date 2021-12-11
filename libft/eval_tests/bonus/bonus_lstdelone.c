/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_lstdelone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:39:27 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/11 13:34:24 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static	void ft_delnode(void *d, size_t n)
{
	free(d);
	(void)n;
}

void	test_lstdelone_all(void)
{
	t_list	*l = ft_lstnew(malloc(10), 10);

	ft_lstdelone(&l, ft_delnode);
	if (!l)
	{
		pwhite();
		printf("ft_lstdelone: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_lstdelone: ");
		pred();
		printf("\tFAIL\n");
	}

}