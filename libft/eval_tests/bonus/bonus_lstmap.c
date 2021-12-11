/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_lstmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:35:27 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/11 13:42:27 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static t_list *		lstmap_f(t_list *m) {
	t_list *	r = ft_lstnew("OK !", 5);
	(void)m;
	return (r);
}

void	test_lstmap_all(void)
{
	t_list	*l = ft_lstnew(strdup("123"), 4);
	t_list	*ret;

	l->next = ft_lstnew(strdup("456"), 4);
	l->next->next = ft_lstnew(strdup("789"), 4);
	ret = ft_lstmap(l, lstmap_f);
	if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && 
		!strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, "123") && 
		!strcmp(l->next->content, "456") && !strcmp(l->next->next->content, "789"))
	{
		pwhite();
		printf("ft_lstmap: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_lstmap: ");
		pred();
		printf("\tFAIL\n");
	}
}