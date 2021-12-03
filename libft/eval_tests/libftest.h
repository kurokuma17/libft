/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftest.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:41:57 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/02 20:52:15 by trnguyen         ###   ########.fr       */
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
#include <stdbool.h>

// test functions
void	test_tolower_all(void);
void	test_toupper_all(void);
void	test_isalnum_all(void);
void	test_isalpha_all(void);
void	test_isascii_all(void);
void	test_isdigit_all(void);
void	test_isprint_all(void);
void	test_atoi_all(void);
void	test_bzero_all(void);
void	test_memset_all(void);
void	test_memcpy_all(void);
//void	test_memccpy_all(void); illegal hardware usage ?!?
void	test_memmove_all(void);
void	test_memcmp_all(void);
void	test_strlen_all(void);


# endif
