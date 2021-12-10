/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:13:35 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/10 15:33:25 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void	test_putstr_all(void)
{
	int		out;
	int		p[2];
	char	*str = "Hello from the other side\n";
	char	buf[27];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putstr(str);
	dup2(out, 1);
	read(p[0], buf, 26);
	buf[26] = 0;
	close(p[0]);
	close(p[1]);
	close(out);
	if (strcmp(buf, str) == 0)
	{
		pwhite();
		printf("ft_putstr: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_putstr: ");
		pred();
		printf("\tFAIL\n");
	}
}