/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:02:04 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/10 16:03:41 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

void	test_putendl_fd_all(void)
{
	int		tmp;
	int		p[2];
	char	*str = "Hello from the other side";
	char	*ref = ft_strjoin(str, "\n");
	char	buf[27];
	int		fd = open("putendl_fd.txt", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND);

	tmp = dup(fd);
	pipe(p);
	dup2(p[1], fd);
	ft_putendl_fd(str, fd);
	dup2(tmp, fd);
	read(p[0], buf, 26);
	buf[26] = 0;
	close(p[0]);
	close(p[1]);
	close(tmp);
	if (strcmp(buf, ref) == 0)
	{
		pwhite();
		printf("ft_putendl_fd: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_putendl_fd: ");
		pred();
		printf("\tFAIL\n");
	}
}