/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:59:01 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/01 19:28:48 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		while (i < len) 
		{
			dst[i] = src[i];
		}
		i++;
	}
	//dst[i] = '\0';
	return (dst);
}

int main(void)
{
	char	src[20] = "Hello abcdef";
	char	dst[100] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";

	printf("%s\n%s\n", src, dst);
	ft_strncpy(dst, src, 3);
	printf("%s\n%s\n", src, dst);

}
