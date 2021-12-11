/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:15:50 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/11 20:42:42 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *begin_list)
{
	int		size;
	t_list	*l;

	size = 0;
	l = begin_list;
	while (l)
	{
		size++;
		l = l->next;
	}
	return (size);
}
