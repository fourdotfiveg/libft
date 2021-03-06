/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_us.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:34:27 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:21:00 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_us(char **termbuf)
{
	static char	*us;

	if (termbuf)
		us = tgetstr("us", termbuf);
	return (us);
}
