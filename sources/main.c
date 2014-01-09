/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 17:39:42 by npineau           #+#    #+#             */
/*   Updated: 2014/01/09 19:07:24 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <termcap.h>
#include "ft_select.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_alst	*data;
	int		width;

	if (argc == 1)
	{
		ft_putendl("Pliss, gimme some list.");
		return (-1);
	}
	data = NULL;
	width = ft_get_param(&data, argv, argc);
	ft_select(data, width);
	return (0);
}
