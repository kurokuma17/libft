/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_p2_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:38:34 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/07 17:56:08 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include "../libftest.h"
#include "../utils.h"

int main()
{
	printf("Part2:\n");
	test_memalloc_all();
	test_memdel_all();
	test_strnew_all();
	test_strdel_all();
	test_strclr_all();
	test_striter_all();
	test_striteri_all();
	test_strmap_all();
	test_strmapi_all();
	test_strequ_all();
	test_strnequ_all();
	// test_strsub_all();
	// test_strjoin_all();
	// test_strtrim_all();
	// test_strsplit_all();
	// test_itoa_all();
	// test_putchar_all();
	// test_putstr_all();
	// test_putendl_all();
	// test_putnbr_all();
	// test_putchar_fd_all();
	// test_putstr_fd_all();
	// test_putendl_fd_all();
	// test_putnbr_fd_all();
}