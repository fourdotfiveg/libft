/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 09:07:29 by briviere          #+#    #+#             */
/*   Updated: 2018/02/10 13:44:13 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_env.h"

static char		*ft_env_set_sub(char *name, char *value)
{
	char	*tmp;
	char	*res;

	tmp = ft_strdup(value);
	res = ft_strjoin_sep(name, '=', tmp);
	free(tmp);
	return (res);
}

void			ft_env_set(char ***envp_ptr, char *name, char *value)
{
	char		**envp;
	size_t		idx;
	size_t		len;
	char		*tmp;

	envp = *envp_ptr;
	idx = 0;
	len = ft_strlen(name);
	while (envp[idx])
	{
		if (ft_strncmp(envp[idx], name, len) == 0 && envp[idx][len] == '=')
		{
			tmp = ft_env_set_sub(name, value);
			free(envp[idx]);
			envp[idx] = tmp;
			return ;
		}
		idx++;
	}
	envp = ft_realloc(envp, (idx + 1) *
			sizeof(char *), (idx + 2) * sizeof(char *));
	envp[idx + 1] = 0;
	envp[idx] = ft_strjoin_sep(name, '=', value);
	*envp_ptr = envp;
}
