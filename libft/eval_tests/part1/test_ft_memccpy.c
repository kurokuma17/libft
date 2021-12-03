/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:14:43 by trnguyen          #+#    #+#             */
/*   Updated: 2021/12/02 20:44:35 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftest.h"

// static int test_memccpy1(void)
// {
// 	const char *src = "Hello World12345";
// 	int c = 'd';
// 	char dst1[10] = "World12345";
// 	char dst2[10] = "World12345";

// 	memccpy(dst1, src, c, strlen(src));
// 	ft_memccpy(dst2, src, c, strlen(src));
// 	if (memcmp(dst1, dst2, 10) == 0 && memcmp(dst1 + 6, dst2 + 6, 4) == 0)
// 		return (true);
// 	else
// 		return (false);
// }

// // static int test_memccpy2(void) //illigal hardware instruction ?!?
// // {
// // 	char	src[] = "basic test of memccpy !";
// // 	char	dst1[15] = {'\0'};
// // 	char	dst2[15] = {'\0'};
// // 	void	*r1 = memccpy(dst1, src, 'm', 15);
// // 	void	*r2 = ft_memccpy(dst2, src, 'm', 15);
// // 	if (r1 == r2)
// // 		return (true);
// // 	else
// // 		return (false);
// // }
// // static int test_memccpy3(void) //illigal hardware instruction ?!?
// // {
// // 	char	dst1[15] = {'\0'};
// // 	char	dst2[15] = {'\0'};
// // 	void	*r1 = memccpy(dst1, "", 0, 0);
// // 	void	*r2 = ft_memccpy(dst2, "", 0, 0);
// // 	if (r1 == r2)
// // 		return (true);
// // 	else
// // 		return (false);
// // }

// int main()
// {
// 	printf("%d\n", test_memccpy1());
// //	(void)test_memccpy2();
// 	printf("%d\n", memccpy_test());

// }