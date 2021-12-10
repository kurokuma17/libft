#include "../libftest.h"

void	test_putnbr_fd_all(void)
{
	int		tmp;
	int		p[2];
	char	buf[100];
	int		fd = open("putnbr_fd.txt", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND);

	tmp = dup(fd);
	pipe(p);
	dup2(p[1], fd);
	ft_putnbr_fd(0, fd);
	ft_putnbr_fd(1, fd);
	ft_putnbr_fd(-1, fd);
	ft_putnbr_fd(12300, fd);
	ft_putnbr_fd(10203, fd);
	ft_putnbr_fd(-56, fd);
	ft_putnbr_fd(2147483647, fd);
	ft_putnbr_fd(-2147483648, fd);
	dup2(tmp, fd);
	buf[read(p[0], buf, 100)] = 0;
	close(p[0]);
	close(p[1]);
	close(tmp);
	if (strcmp(buf, "01-11230010203-562147483647-2147483648") == 0)
	{
		pwhite();
		printf("ft_putnbr_fd: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_putnbr_fd: ");
		pred();
		printf("\tFAIL\n");
	}
}