/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:23:31 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/03 16:20:47 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_wordcount(char const *s, char c)
{
	unsigned int	n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			n++;
		while (*s && *s != c)
			s++;
	}
	return (n);
}

static unsigned int	ft_wordlen(char const *s, char c)
{
	unsigned int	len;

	len = 0;
	while (*s != c && *s++)
		len++;
	return (len);
}

static char	**ft_tabledel(char **ret, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(ret[i]);
	free(ret);
	return (NULL);
}

static char	**ft_split(char const *s, char c)
{
	char			**res;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	res = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			j = 0;
			res[i] = (char *)malloc(sizeof(char) * (ft_wordlen(s, c) + 1));
			if (res[i] == NULL)
				return (ft_tabledel(res, i));
			while (*s && *s != c)
				res[i][j++] = *s++;
			res[i++][j] = '\0';
		}
	}
	res[i] = NULL;
	return (res);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = ft_split(s, c);
	return (res);
}

// static char		*ft_strndup(const char *s, size_t n)
// {
// 	char			*str;

// 	str = (char *)malloc(sizeof(char) * n + 1);
// 	if (str == NULL)
// 		return (NULL);
// 	str = ft_strncpy(str, s, n);
// 	str[n] = '\0';
// 	return (str);
// }

// char			**ft_strsplit(char const *s, char c)
// {
// 	int				i;
// 	int				j;
// 	int				k;
// 	char			**tab;

// 	i = 0;
// 	k = 0;
// 	tab = (char **)malloc(sizeof(char *) * (ft_cntwrd(s, c)) + 1);
// 	if (tab == NULL)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		while (s[i] == c)
// 			i++;
// 		j = i;
// 		while (s[i] && s[i] != c)
// 			i++;
// 		if (i > j)
// 		{
// 			tab[k] = ft_strndup(s + j, i - j);
// 			k++;
// 		}
// 	}
// 	tab[k] = NULL;
// 	return (tab);
// }