/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:52:17 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/01 18:02:04 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Enter 2 strings\n");
	}
	else
	{
		printf("Source:  %s,  %p\n", av[1], &av[1]);
		printf("Destination:  %s,  %p\n\n", av[2], &av[2]);
		ft_strcpy(av[2], av[1]);
		printf("Source:  %s,  %p\n", av[1], &av[1]);
		printf("Destination:  %s,  %p\n", av[2], &av[2]);
	}
}
