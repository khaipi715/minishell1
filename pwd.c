/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:24:24 by npaturzo          #+#    #+#             */
/*   Updated: 2024/02/20 13:43:08 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ms_pwd(void)
{
	char	path[PATH_MAX + 1];

	getcwd(path, PATH_MAX);
	printf("%s\n", path);
}

/*
int	main(void)
{
	ms_pwd();
}
*/
