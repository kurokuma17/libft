/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:12:30 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 16:57:10 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"
#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_2	"there is no stars in the sky"
static int test_strcat1(void)
{
	char	*src = "the cake is a lie !\0I'm hidden lol\r\n";
	char	dst1[50] = "there is no stars in the sky";
	char	dst2[50] = "there is no stars in the sky";
	char	buff[200] = "strncat() functions append a copy of the null-terminated string s2 to the end of the null-terminated string s1";

	strcat(dst1, src);
	ft_strcat(dst2, src);
	char *r1 = strcat(buff, src);
	char *r2 = ft_strcat(buff, src);
	if (strcmp(dst1, dst2) == 0 && r1 == r2)
		return (true);
	else
		return (false);
}

static int test_strcat2(void)
{
	const char	*str = "AAAA";
	char		buff1[100];
	char		buff2[100];

	memset(buff1, 'B', 30);
	memset(buff2, 'B', 30);
	buff1[4] = 0;
	buff2[4] = 0;

	char	*r1 = strcat(buff1, str);
	char	*r2 = ft_strcat(buff2, str);
	if (memcmp(r1, r2, 20) == 0)
		return (true);
	else
		return (false);

}

static int test_strcat3(void)
{
	char	dst1[50] = "there is no stars in the sky";
	char	dst2[50] = "there is no stars in the sky";
	char	*r1 = strcat(dst1, "");
	char	*r2 = ft_strcat(dst2, "");

	if (strcmp(dst1, dst2) == 0 && ((dst1 - r1) == (dst2 - r2)))
		return (true);
	else
		return (false);
}

static int test_strcat4(void)
{
	char	*str = "the cake is a lie !\0I'm hidden lol\r\n";
	char	dst1[100] = "";
	char	dst2[100] = "";

	strcat(dst1, str);
	ft_strcat(dst2, str);
	if (strcmp(dst1, dst2) == 0)
		return (true);
	else
		return (false);
}

void	test_strcat_all(void)
{
	if (test_strcat1() == true && test_strcat2() == true && 
		test_strcat3() == true && test_strcat4() == true)
	{
		pwhite();
		printf("ft_strcat: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strcat: ");
		pred();
		printf("\tFAIL\n");
	}
}
