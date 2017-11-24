/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_human_metric_dec.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:41:27 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 10:49:51 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_human_metric_dec(size_t nb)
{
	if (nb < 1000)
		return ('B');
	if (nb < 1000000)
		return ('K');
	if (nb < 1000000000)
		return ('G');
	if (nb < 1000000000000)
		return ('T');
	if (nb < 1000000000000000)
		return ('P');
	if (nb < 1000000000000000000)
		return ('E');
	if (nb >= 1000000000000000000)
		return ('Z');
	return (0);
}