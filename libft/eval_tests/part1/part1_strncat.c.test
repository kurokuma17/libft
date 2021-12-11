/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:59:10 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 18:26:54 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strncat1(void)
{
	char	*src = "the cake is a lie !\0I'm hidden lol\r\n";
	char	dst1[50] = "there is no stars in the sky";
	char	dst2[50] = "there is no stars in the sky";
	char	buff[200] = "strncat() functions append a copy of the null-terminated string s2 to the end of the null-terminated string s1";
	size_t	max = 5;

	strncat(dst1, src, max);
	ft_strncat(dst2, src, max);
	char *r1 = strncat(buff, src, max*2);
	char *r2 = ft_strncat(buff, src, max*2);
	if (strcmp(dst1, dst2) == 0 && r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strncat2(void)
{
	char	*src = "the cake is a lie !\0I'm hidden lol\r\n";
	char	dst1[50] = "there is no stars in the sky";
	char	dst2[50] = "there is no stars in the sky";
	size_t	max = 500;

	strncat(dst1, src, max);
	ft_strncat(dst2, src, max);
	if (strcmp(dst1, dst2) == 0)
		return (true);
	else
		return (false);
}

static int test_strncat3(void)
{
	char	dst1[50] = "there is no stars in the sky";
	char	dst2[50] = "there is no stars in the sky";
	strncat(dst1, "", 10);
	ft_strncat(dst2, "", 10);

	if (strcmp(dst1, dst2) == 0)
		return (true);
	else
		return (false);
}

static int test_strncat4(void)
{
	char	*str = "the cake is a lie !\0I'm hidden lol\r\n";
	char	dst1[100] = "";
	char	dst2[100] = "";

	strncat(dst1, str, 20);
	ft_strncat(dst2, str, 20);
	if (strcmp(dst1, dst2) == 0)
		return (true);
	else
		return (false);
}

static int test_strncat5(void)
{
	char	*str = "BBBBBBBBBBBBBBB";
	char	dst1[50] = "AAAAAAAAAAAAAAA";
	char	dst2[50] = "AAAAAAAAAAAAAAA";
	size_t	max = 10;

	strncat(dst1, str, max);
	ft_strncat(dst2, str, max);
	if (memcmp(dst1, dst2, 40) == 0 && dst2[25] == '\0')
		return (true);
	else
		return (false);

}


void	test_strncat_all(void)
{
	if (test_strncat1() == true && test_strncat2() == true && 
		test_strncat3() == true && test_strncat4() == true &&
		test_strncat5() == true)
	{
		pwhite();
		printf("ft_strncat: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strncat: ");
		pred();
		printf("\tFAIL\n");
	}
}
