/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 17:39:42 by npineau           #+#    #+#             */
/*   Updated: 2014/01/08 18:42:45 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <termcap.h>
#include "ft_select.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_alst	*data;

	if (argc == 1)
	{
		ft_putendl("Pliss, gimme some list.");
		return (-1);
	}
	data = NULL;
	ft_get_param(&data, argv, argc);
	ft_putendl(data->param);
	ft_select(data);
	return (0);
}
