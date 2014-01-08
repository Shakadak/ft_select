/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 17:52:34 by npineau           #+#    #+#             */
/*   Updated: 2014/01/08 18:48:31 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"
#include <string.h>
#include "libft.h"

void	ft_get_param(t_alst **data, char **argv, int argc)
{
	t_alst	*new;
	int		i;

	ft_putendl("entree get_param");
	new = NULL;
	i = 1;
	while (i < argc)
	{
		new = ft_new_alst(argv[i], *data);
		if (*data)
			data = &new;
		else
			*data = new;
		ft_putendl((*data)->param);
		data = &new;
		i++;
	}
	ft_putendl("sortie get_param");
}
