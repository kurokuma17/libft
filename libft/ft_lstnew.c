/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:56:38 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/21 14:17:33 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	link = (t_list *)malloc(sizeof(*link));
	if (!link)
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		link->content = NULL;
		link->content_size = 0;
		return (link);
	}
	link->content = (void *)malloc(content_size);
	if (!link->content)
		return (NULL);
	ft_memcpy(link->content, content, content_size);
	link->content_size = content_size;
	link->next = NULL;
	return (link);
}
