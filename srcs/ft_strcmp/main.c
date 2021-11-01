/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:31:57 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/01 16:50:55 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	main(int ac, char **av)
{
	if (ac != 3)
		ft_putstr("Enter two strings\n");
	else
	{
		if (ft_strcmp(av[1], av[2]) == 0)
			ft_putstr("same\n");
		else
			ft_putstr("different\n");
	}
}
