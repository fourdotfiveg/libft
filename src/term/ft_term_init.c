/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:37:59 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 17:31:08 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_init(const char *termtype)
{
	char	*termbuf;
	int		succ;

	if ((termbuf = ft_strnew(2048)) == 0)
		return (0);
	succ = tgetent(termbuf, termtype);
	if (succ <= 0)
		return (0);
	return (termbuf);
}
