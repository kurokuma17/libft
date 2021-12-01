/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:15:35 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/30 18:34:40 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

static int	test_atoi(void)
{
	int test_passed = 0;
	if(atoi("0123") == ft_atoi("0123"))
		test_passed++;
	if(atoi("-0123") == ft_atoi("-0123"))
		test_passed++;
	if(atoi("-+0123") == ft_atoi("-+0123"))
		test_passed++;
	if(atoi("+-0123") == ft_atoi("+-0123"))
		test_passed++;
	if(atoi("--0123") == ft_atoi("--0123"))
		test_passed++;
	if(atoi("abc0123") == ft_atoi("abc0123"))
		test_passed++;
	if(atoi("    a0123") == ft_atoi("    a0123"))
		test_passed++;
	if(atoi("\t\n\v\f\r0123") == ft_atoi("\t\n\v\f\r0123"))
		test_passed++;
	if(atoi("++0123") == ft_atoi("++0123"))
		test_passed++;
	if(atoi("2147483647") == ft_atoi("2147483647"))
		test_passed++;	
	if(atoi("-2147483648") == ft_atoi("-2147483648"))
		test_passed++;
	if(atoi("---0123") == ft_atoi("---0123"))
		test_passed++;
	if (ft_atoi("") == atoi(""))
		test_passed++;		
	if (test_passed == 13)
		return (true);
	else
		return (false);
}
void test_atoi_all(void)
{
	if (test_atoi() == true)
		printf("ft_atoi: OK\n");
	else
		printf("ft_atoi: FAIL\n");
}

int main()
{
	test_atoi_all();
}