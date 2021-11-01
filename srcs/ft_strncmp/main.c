/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:06:58 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/01 16:03:16 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	main(int ac, char **av)
{
	if (ac != 3)
		ft_putstr("Enter two strings\n");
	else
	{
		if (ft_strncmp(av[1], av[2], 3) == 0)
			ft_putstr("same\n");
		else
			ft_putstr("different\n");
	}
}
