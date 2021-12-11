/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:59:13 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/10 16:00:55 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void	test_putendl_all(void)
{
	int		out;
	int		p[2];
	char	*str = "Hello from the other side";
	char	*ref = ft_strjoin(str, "\n");
	char	buf[27];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putendl(str);
	dup2(out, 1);
	read(p[0], buf, 26);
	buf[26] = 0;
	close(p[0]);
	close(p[1]);
	close(out);
	if (strcmp(buf, ref) == 0)
	{
		pwhite();
		printf("ft_putendl: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_putendl: ");
		pred();
		printf("\tFAIL\n");
	}
}