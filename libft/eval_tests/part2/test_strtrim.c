/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:22:28 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/09 19:02:44 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int test_strtrim1(void)
{
	char *str = "   this string has way too many spaces \t\n";
	char *res = ft_strtrim(str);
	if (strcmp(res, "this string has way too many spaces") == 0)
		return (true);
	else
		return (false);	
	free(res);
}

static int test_strtrim2(void)
{
	char *str = "   \t \n    \t\n   \n\n \t  ";
	char *res = ft_strtrim(str);
	if (strcmp(res, "") == 0)
		return (true);
	else
		return (false);	
	free(res);
}


static int test_strtrim3(void)
{
	char *str = "this  \n   string     might have \t lots of space, but doesn' t need to  be trimmed";
	char *res = ft_strtrim(str);
	if (strcmp(res, str) == 0)
		return (true);
	else
		return (false);	
	free(res);
}

static int test_strtrim4(void)
{
	char *str = "";
	char *res = ft_strtrim(str);
	if (strcmp(res, "") == 0)
		return (true);
	else
		return (false);
	free(res);

}

static int test_strtrim5(void)
{
	char *str = " \n\t  trim this \t string\n, please \t\n";
	char *ref = "trim this \t string\n, please";
	char *res = ft_strtrim(str);
	if (memcmp(res, ref, strlen(ref) + 1) == 0)
		return (true);
	else
		return (false);	
	free(res);
}


void	test_strtrim_all(void)
{
	if (test_strtrim1() == true && test_strtrim2() == true &&
		test_strtrim3() == true && test_strtrim4() == true &&
		test_strtrim5() == true)
	{
		pwhite();
		printf("ft_strtrim: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strtrim: ");
		pred();
		printf("\tFAIL\n");
	}
}