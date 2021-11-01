/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:59:08 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/01 16:02:33 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	main(int ac, char **av)
{
	if (ac != 2)
		ft_putstr("Enter ONE string\n");
	else
	{
		ft_putstr("Length of string: ");
		ft_putnbr(ft_strlen(av[1]));
		ft_putchar('\n');
	}
}
