/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_lstdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:04:51 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/11 13:34:48 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static	void ft_delnode(void *d, size_t n)
{
	free(d);
	(void)n;
}

void	test_lstdel_all(void)
{
	t_list	*l = ft_lstnew(strdup("nyancat"), 8);

	l->next = ft_lstnew(strdup("#NYANCAT#"), 7);
	ft_lstdel(&l, ft_delnode);
	if (!l)
	{
		pwhite();
		printf("ft_lstdel: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_lstdel: ");
		pred();
		printf("\tFAIL\n");
	}
}