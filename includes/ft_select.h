/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 17:26:05 by npineau           #+#    #+#             */
/*   Updated: 2014/01/08 19:14:07 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_SELECT_H
# define FT_SELECT_H

typedef struct		s_alst
{
	char			*param;
	int				size;
	struct s_alst	*next;
}					t_alst;

typedef struct	s_term
{
	int			h;
	int			w;
}				t_term;

void	ft_term(t_alst *data);
void	ft_select(t_alst *data);
t_alst	*ft_new_alst(char	*data, t_alst *prev);
void	ft_mod_lst(t_alst *data);
void	ft_get_param(t_alst **data, char **argv, int argc);
int		ft_aff_lst(t_alst *data);
int		ft_printchar(int c);
#endif
