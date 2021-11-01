/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:20:31 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/01 15:42:50 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../libft.h"

int	main(int ac, char **av)
{
	if (ac != 2)
		printf("Enter an argument\n");
	else if (av[1][1] != '\0')
		printf("Enter just one character\n");
	else
		ft_putchar(av[1][0]);
}
