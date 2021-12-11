/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_lstadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:12:21 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/11 13:18:48 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_lstadd1(void)
{
	t_list	*l = ft_lstnew(strdup("nyacat"), 8);
	t_list	*n = ft_lstnew(strdup("OK"), 3);

	ft_lstadd(&l, n);
	if (l == n && !strcmp(l->content, "OK") && l->content_size == 3)
	{
		free(l->next);
		free(l);
		return (true);
	}
	else
		return (false);	
	free(l->next);
	free(l);
}

static int test_lstadd2(void)
{
	t_list	*l =  NULL;
	t_list	*n = ft_lstnew(strdup("OK"), 3);

	ft_lstadd(&l, n);
	if (l == n && !strcmp(l->content, "OK") && l->content_size == 3)
	{
		free(l->next);
		free(l);
		return (true);
	}
	else
		return (false);	
	free(l->next);
	free(l);
}

void	test_lstadd_all(void)
{
	if (test_lstadd1() == true && test_lstadd2() == true)
	{
		pwhite();
		printf("ft_lstadd: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_lstadd: ");
		pred();
		printf("\tFAIL\n");
	}
}