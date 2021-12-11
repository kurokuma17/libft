/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:03:26 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/09 20:14:50 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

static int	arrcmp(char **arr1, char **arr2)
{
	for (; *arr1; arr1++, arr2++)
	{
		if (*arr2 == NULL || strcmp(*arr1, *arr2))
			return (false);
	}
	return (true);
}

static int test_strsplit1(void)
{
	char *str = "split this   string by   spaces  ";
	char *ref[] = {"split", "this", "string", "by", "spaces", NULL};
	char **res = ft_strsplit(str, ' ');
	if (arrcmp(ref, res) == true)
 		return (true);
	else
		return (false);	
}

static int test_strsplit2(void)
{
	char *str = ".....................";
	char *ref[] = {NULL};
	char **res = ft_strsplit(str, '.');
	if (ref[0] == res[0])
 		return (true);
	else
		return (false);	

}


static int test_strsplit3(void)
{
	char *str = "             right ";
	char *ref[] = {"right", NULL};
	char **res = ft_strsplit(str, ' ');
	if (arrcmp(ref, res) == true)
 		return (true);
	else
		return (false);	
	free(res);
}

static int test_strsplit4(void)
{
	char *str = " left          ";
	char *ref[] = {"left", NULL};
	char **res = ft_strsplit(str, ' ');
	if (arrcmp(ref, res) == true)
 		return (true);
	else
		return (false);	
	free(res);
}


static int test_strsplit5(void)
{
	char *str = "";
	char *ref[] = {NULL};
	char **res = ft_strsplit(str, '.');
	if (arrcmp(ref, res) == true)
 		return (true);
	else
		return (false);	
}


static int test_strsplit6(void)
{
	char	*str = "0 0 0 0 0 0 0 0 0";
	char	**res = ft_strsplit(str, ' ');
	char	*ref[] = {"0", "0", "0", "0", "0", "0", "0", "0", "0", NULL};
	if (arrcmp(ref, res) == true)
		return (true);
	else
		return (false);
}

static int test_strsplit7(void)
{
	char *str = "this string cannot be split";
	char *ref[] = {"this string cannot be split", NULL};
	char **res = ft_strsplit(str, '.');
	if (arrcmp(ref, res) == true)
 		return (true);
	else
		return (false);	
}


void	test_strsplit_all(void)
{
	if (test_strsplit1() == true && test_strsplit2() == true &&
		test_strsplit3() == true && test_strsplit4() == true &&
		test_strsplit5() == true && test_strsplit6() == true &&
		test_strsplit7() == true)
	{
		pwhite();
		printf("ft_strsplit: ");
		pgreen();
		printf("\t0K\n");
	}
	else
	{
		pwhite();
		printf("ft_strsplit: ");
		pred();
		printf("\tFAIL\n");
	}
}