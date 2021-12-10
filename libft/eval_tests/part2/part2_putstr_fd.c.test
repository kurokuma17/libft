/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:38:21 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/10 15:57:29 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void	test_putstr_fd_all(void)
{
	int		tmp;
	int		p[2];
	char	*str = "Hello from the other side\n";
	char	buf[27];
	int		fd = open("putstr_fd.txt", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND);

	tmp = dup(fd);
	pipe(p);
	dup2(p[1], fd);
	ft_putstr_fd(str, fd);
	dup2(tmp, fd);
	read(p[0], buf, 26);
	buf[26] = 0;
	close(p[0]);
	close(p[1]);
	close(tmp);
	if (strcmp(buf, str) == 0)
	{
		pwhite();
		printf("ft_putstr_fd: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_putstr_fd: ");
		pred();
		printf("\tFAIL\n");
	}
}