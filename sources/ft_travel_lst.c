/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_travel_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:26:52 by npineau           #+#    #+#             */
/*   Updated: 2014/01/08 21:26:56 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"
#include <termcap.h>

static int	treat_end(int end, t_alst *data);

int			ft_travel_lst(t_alst *data, int end)
{
	int ret;

	ret = 1;
	end = treat_end(end, data);
	while (1)
	{
		if (ret == 1)
			ret = key_hook(data, end);
		if (ret == 0)
			return (0);
		else if (ret == 1)
		{
			if (data->next)
				ret = ft_travel_lst(data->next, 0);
			else if (end != -1)
				return (-1);
		}
		else if (ret == -1)
		{
			if (end == -1 && data->next)
				ret = ft_travel_lst(data->next, 1);
			else if (end != -1)
				return (1);
		}
	}
}

static int	treat_end(int end, t_alst *data)
{
	if (data->next == NULL && end == 1)
		end = 0;
	if (end == 1 && data->next)
		ft_travel_lst(data->next, 1);
	return (end);
}
