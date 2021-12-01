/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_p1_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:45:24 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/01 20:34:37 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include "../../libftest.h"
#include "../../utils.h"

int main()
{
	test_tolower_all();
	test_toupper_all();
	test_isalnum_all();
	test_isalpha_all();
	test_isascii_all();
	test_isdigit_all();
	test_isprint_all();
	test_atoi_all();
	test_bzero_all();
	test_memset_all();
	test_memcpy_all();

	return (0);
}
