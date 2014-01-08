/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 18:31:59 by npineau           #+#    #+#             */
/*   Updated: 2014/01/08 18:26:03 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <termcap.h>
#include "ft_select.h"
#include "libft.h"

void	ft_select(t_alst *data)
{
	char	*term_buff;
	char	*term_type;
	int		ret;

	ft_putendl("entree select");
	ret = 0;
	term_buff = NULL;
	term_type = getenv("TERM");
	if (term_type == NULL)
		ft_putendl("Specify a terminal type with setenv.");
	ret = tgetent(term_buff, term_type);
	if (ret < 0)
		ft_putendl("Soz, couldn't access da termcap data base.");
	else if (ret == 0)
		ft_putendl("wtf, define a valid teminal pliss.");
	else
		ft_term(data);
	ft_putendl("sortie select");
}
