/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strstr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: trnguyen <trnguyen@student.hive.fi>		+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/03 17:52:45 by trnguyen		  #+#	#+#			 */
/*   Updated: 2021/11/04 15:45:11 by trnguyen		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	len;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	else
	{
		while (*needle && *haystack)
		{
			if (*needle == *haystack)
			{
				needle++;
				haystack++;
			}
			else
				haystack++;
		}
		if (*needle == '\0')
			return ((char *)(haystack - len));
		else
			return (0);
	}
}
