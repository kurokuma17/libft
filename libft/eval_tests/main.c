/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:41:16 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/11 20:48:57 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "libftest.h"
#include "utils.h"

int main()
{
	printf("\n\tPART 1:\n\n");
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
	pwhite();
	printf("\n\tPART 2:\n\n");
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
	test_strsub_all();
	test_strjoin_all();
	test_strtrim_all();
	test_strsplit_all();
	test_itoa_all();
	test_putchar_all();
	test_putstr_all();
	test_putendl_all();
	test_putnbr_all();
	test_putchar_fd_all();
	test_putstr_fd_all();
	test_putendl_fd_all();
	test_putnbr_fd_all();
	pwhite();
	printf("\n\tBONUS PART:\n\n");
	test_lstnew_all();
	test_lstdelone_all();
	test_lstdel_all();
	test_lstadd_all();
	test_lstiter_all();
	test_lstmap_all();
	pwhite();
	printf("\n\tBONUS BONUS PART:\n\n");
	test_isspace_all();
	test_strndup_all();
	test_lstadd_back_all();
	test_lstsize_all();
}