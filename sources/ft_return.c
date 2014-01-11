/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 15:17:16 by npineau           #+#    #+#             */
/*   Updated: 2014/01/11 19:19:17 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_select.h"

void	ft_return_lst(t_alst *data, int spc, int begin)
{
	if (data->select)
	{
		if (spc)
			write(1, " ", 1);
		write(1, data->param, data->size);
		spc++;
	}
	if (data->next->i != begin)
		ft_return_lst(data->next, spc, begin);
	free(data);
}
