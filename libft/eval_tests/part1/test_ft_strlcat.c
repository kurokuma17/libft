/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:51:46 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/06 19:51:36 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strlcat1(void)
{
	char	*src = "the cake is a lie !\0I'm hidden lol\r\n";
	char	dst1[50] = "there is no stars in the sky";
	char	dst2[50] = "there is no stars in the sky";
	size_t	max = strlen(src) + 4;

	size_t r1 = strlcat(dst1, src, max);
	size_t r2 = ft_strlcat(dst2, src, max);
	if (strcmp(dst1, dst2) == 0 && r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strlcat2(void)
{
	char	dst1[4] = "";
	char	dst2[4] = "";
	size_t r1 = strlcat(dst1, "there is no stars in the sky", 4);
	size_t r2 = ft_strlcat(dst2, "there is no stars in the sky", 4);
	if (strcmp(dst1, dst2) == 0 && r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strlcat3(void)
{
	char	dst1[50] = "there is no stars in the sky";
	char	dst2[50] = "there is no stars in the sky";
	size_t r1 = strlcat(dst1, "", 50);
	size_t r2 = ft_strlcat(dst2, "", 50);
	if (strcmp(dst1, dst2) == 0 && r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strlcat4(void)
{
	char	*src = "the cake is a lie !\0I'm hidden lol\r\n";
	char	dst1[50] = "there is no stars in the sky";
	char	dst2[50] = "there is no stars in the sky";
	size_t	max = 0;

	strlcat(dst1, src, max);
	ft_strlcat(dst2, src, max);
	if (strcmp(dst1, dst2) == 0)
		return (true);
	else
		return (false);
}

static int test_strlcat5(void)
{
	char	*src = "aaa";
	char	dst1[20];
	char	dst2[20];
	int		r1;
	int		r2;

	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));

	strlcat(dst1, src, 20);
	strlcat(dst1, src, 20);
	r1 = strlcat(dst1, src, 20);

	ft_strlcat(dst2, src, 20);
	ft_strlcat(dst2, src, 20);
	r2 = ft_strlcat(dst2, src, 20);
	if (r1 == r2)
		return (true);
	else
		return (false);
}

void	test_strlcat_all(void)
{
	if (test_strlcat1()== true && test_strlcat2() == true && 
		test_strlcat3() == true && test_strlcat4() == true &&
		test_strlcat5())
	{
		pwhite();
		printf("ft_strlcat: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strlcat: ");
		pred();
		printf("\tFAIL\n");
	}
}
