/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftest.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:41:57 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/06 22:38:04 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTEST_H
# define LIBFTEST_H
# include "../libft.h"
# include "utils.h"

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <assert.h>
# include <stdbool.h>

// test functions

void	test_memset_all(void);
void	test_bzero_all(void);
void	test_memcpy_all(void);
void	test_memccpy_all(void);
void	test_memmove_all(void);
void	test_memchr_all(void);
void	test_memcmp_all(void);
void	test_strlen_all(void);
void	test_strdup_all(void);
void	test_strcpy_all(void);
void	test_strncpy_all(void);
void	test_strcat_all(void);
void	test_strncat_all(void);
void	test_strlcat_all(void);
void	test_strchr_all(void);
void	test_strrchr_all(void);
void	test_strstr_all(void);
void	test_strnstr_all(void);
void	test_strcmp_all(void);
void	test_strncmp_all(void);
void	test_atoi_all(void);
void	test_isalpha_all(void);
void	test_isdigit_all(void);
void	test_isalnum_all(void);
void	test_isascii_all(void);
void	test_isprint_all(void);
void	test_toupper_all(void);
void	test_tolower_all(void);

void	test_memalloc_all(void);
void	test_memdel(void);
void	test_strnew(void);
void	test_strdel(void);
void	test_strclr(void);
void	test_striter(void);
void	test_striteri(void);
void	test_strmap(void);
void	test_strmapi(void);
void	test_strequ(void);
void	test_strnequ(void);
void	test_strsub(void);
void	test_strjoin(void);
void	test_strtrim(void);
void	test_strsplit(void);
void	test_itoa(void);
void	test_putchar(void);
void	test_putstr(void);
void	test_putendl(void);
void	test_putnbr(void);
void	test_putchar_fd(void);
void	test_putstr_fd(void);
void	test_putendl_fd(void);
void	test_putnbr_fd(void);

# endif
