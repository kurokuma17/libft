/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_lstiter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:25:30 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/11 13:33:46 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static void		ft_iterl(t_list *m)
{
	free(m->content);
	m->content = strdup("OK !");
	m->content_size = 5;
}


void	test_lstiter_all(void)
{
	t_list	*l = ft_lstnew(strdup(" 1 2 3 "), 8);

	l->next = ft_lstnew(strdup("ss"), 3);
	l->next->next = ft_lstnew(strdup("-_-"), 4);
	ft_lstiter(l, ft_iterl);
	if (!strcmp(l->content, "OK !") && !strcmp(l->next->content, "OK !") && 
		!strcmp(l->next->next->content, "OK !"))
	{
		pwhite();
		printf("ft_lstiter: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_lstiter: ");
		pred();
		printf("\tFAIL\n");
	}
}