/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_alst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 18:08:14 by npineau           #+#    #+#             */
/*   Updated: 2014/01/08 18:50:18 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_select.h"
#include "libft.h"

t_alst	*ft_new_alst(char	*data, t_alst *prev)
{
	t_alst	*new;

	ft_putendl("entree new_alst");
	new = (t_alst *)malloc(sizeof(t_alst));
	if (!new)
		return (NULL);
	new->param = data;
	new->size = ft_strlen(data);
/*	new->selected = 0;*/
	if (prev)
		prev->next = new;
	ft_putendl("sortie new_alst");
	return (new);
}
