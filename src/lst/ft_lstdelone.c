/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:25:41 by briviere          #+#    #+#             */
/*   Updated: 2018/02/24 16:54:37 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstdelone(t_lst **alst, void (*del)(void *, size_t))
{
	if (del == FT_LST_DEL)
		free((*alst)->content);
	else if (del)
		del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}
