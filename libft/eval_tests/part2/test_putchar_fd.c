/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:35:59 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/10 15:19:27 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void	test_putchar_fd_all(void)
{
	int		tmp;
	int		p[2];
	char	buf[4];
	int		fd = open("putchar_fd.txt", O_RDWR| O_CREAT | O_APPEND);

	tmp = dup(fd);
	pipe(p);
	dup2(p[1], fd);
	ft_putchar_fd('a', fd);
	ft_putchar_fd('b', fd);
	ft_putchar_fd('c', fd);
	dup2(tmp, fd);
	read(p[0], buf, 3);
	buf[3] = 0;
	close(p[0]);
	close(p[1]);
	close(tmp);
	if (strcmp(buf, "abc") == 0)
	{
		pwhite();
		printf("ft_putchar_fd: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_putchar_fd: ");
		pred();
		printf("\tFAIL\n");
	}
}