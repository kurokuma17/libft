/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:56:38 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/26 15:33:59 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	link = (t_list *)malloc(sizeof(*link));
	if (!link)
		return (NULL);
	if (content == NULL)
	{
		link->content = NULL;
		link->content_size = 0;
	}
	else
	{
		link->content = (void *)malloc(content_size);
		if (!link->content)
		{
			free(link);
			return (NULL);
		}
		ft_memcpy(link->content, content, content_size);
		link->content_size = content_size;
	}
	link->next = NULL;
	return (link);
}
// t_list	*ft_lstnew(void const *content, size_t content_size)
// {
// 	t_list	*new;

// 	if (!(new = (t_list *)malloc(sizeof(t_list))))
// 		return (NULL);
// 	if (!content)
// 	{
// 		new->content = NULL;
// 		new->content_size = 0;
// 	}
// 	else
// 	{
// 		if (!(new->content = malloc(content_size)))
// 		{
// 			free(new);
// 			return (NULL);
// 		}
// 		ft_memcpy(new->content, content, content_size);
// 		new->content_size = content_size;
// 	}
// 	new->next = NULL;
// 	return (new);
// }