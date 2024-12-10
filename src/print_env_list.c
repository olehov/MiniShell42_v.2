/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_env_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <ogrativ@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:23:43 by ogrativ           #+#    #+#             */
/*   Updated: 2024/12/10 11:30:20 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	print_env_list(t_list *lst)
{
	t_env	*env;

	env = NULL;
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		env = (t_env *)(lst->content);
		if (env == NULL)
			return ;
		printf("%s=%s\n", env->key, env->value);
		lst = lst->next;
	}
}