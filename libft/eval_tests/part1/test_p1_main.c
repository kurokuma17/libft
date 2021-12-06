/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_p1_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:45:24 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/06 22:22:01 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include "../libftest.h"
#include "../utils.h"

int main()
{
	test_memset_all();
	test_bzero_all();
	test_memcpy_all();
	test_memccpy_all();
	test_memmove_all();
	test_memchr_all();
	test_memcmp_all();
	test_strlen_all();
	test_strdup_all();
	test_strcpy_all();
	test_strncpy_all();
	test_strcat_all();
	test_strncat_all();
	test_strlcat_all();
	test_strchr_all();
	test_strrchr_all();
	test_strstr_all();
	test_strnstr_all();
	test_strcmp_all();
	test_strncmp_all();
	test_atoi_all();
	test_isalpha_all();
	test_isdigit_all();
	test_isalnum_all();
	test_isascii_all();
	test_isprint_all();
	test_toupper_all();
	test_tolower_all();
	return (0);
}
