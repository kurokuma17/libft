/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_p1_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:45:24 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 12:55:07 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include "../libftest.h"
#include "../utils.h"

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
	test_memccpy_all();
	test_memmove_all();
	test_memcmp_all();
	test_strlen_all();
	return (0);
}
