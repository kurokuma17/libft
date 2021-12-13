/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:17:31 by trnguyen          #+#    #+#             */
/*   Updated: 2021/11/24 16:26:44 by trnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// separate in a pretty print header/ utils file.
#include "utils.h"
#include "libftest.h"
void pred (void)
{
  printf(RED);
}

void pgreen(void)
{
  printf(GREEN);
}

void pwhite (void)
{
  printf(WHITE);
}
