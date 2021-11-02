/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:01:44 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/02 21:01:26 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
# define LIBFT_H_
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int nb);

int		ft_strlen(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);

#endif

/*
• memset
• bzero
• memcpy
• memccpy
• memmove
• memchr
• memcmp
// • strlen
// • strdup
// • strcpy
// • strncpy (pretty finnicky, not happy about this)
• strcat
• strncat
• strlcat
• strchr
• strrchr
• strstr
• strnstr
//• strcmp
//• strncmp
• atoi
//• isalpha
//• isdigit
//• isalnum
//• isascii
//• isprint
• toupper
• tolower
*/