/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:55:29 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/01 17:39:45 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "fffffff";
	s2 = ft_strdup(s1);
	ft_putstr(s1);
	ft_putchar('\n');
	printf("s1 address: %p\n", s1);
	ft_putstr(s2);
	ft_putchar('\n');
	printf("s2 address: %p\n", s2);
	printf("0 if s1 & s2 are same, any other number if different: ");
	printf("%d\n", ft_strcmp(s1, s2));
}
