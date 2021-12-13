/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_lstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:17:35 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/11 13:35:01 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static	int test_lstnew1(void)
{
	char	*data = "here's some data";
	t_list	*l = ft_lstnew(data, strlen(data) + 1);

	if (strcmp(data, l->content) == 0)
		return (true);
	else
		return (false);
}

static	int test_lstnew2(void)
{
	char	*data = "here's some data";
	t_list	*l = ft_lstnew(data, strlen(data) + 1);

	if (strcmp(data, l->content) == 0)
	{
		free(l->content);
		free(l);
		return (true);
	}
	else
		return (false);
}

static	int test_lstnew3(void)
{
	t_list	*l = ft_lstnew(NULL, 0);

	if (!l->content)
		return (true);
	else
		return (false);
}

void	test_lstnew_all(void)
{
	if (test_lstnew1() == true && test_lstnew2() == true &&
		test_lstnew3() == true)

	{
		pwhite();
		printf("ft_lstnew: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_lstnew: ");
		pred();
		printf("\tFAIL\n");
	}
}