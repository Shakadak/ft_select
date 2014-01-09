/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 17:26:05 by npineau           #+#    #+#             */
/*   Updated: 2014/01/09 17:09:43 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_SELECT_H
# define FT_SELECT_H

typedef struct		s_alst
{
	char			*param;
	int				size;
	int				select;
	int				i;
	struct s_alst	*next;
	struct s_alst	*prev;
}					t_alst;

typedef struct	s_term
{
	int			h;
	int			w;
	int			max_c;
}				t_term;

void	ft_term(t_alst *data, int width);
void	ft_select(t_alst *data);
t_alst	*ft_new_alst(char	*data, t_alst *prev, int i);
void	ft_mod_lst(t_alst *data);
int		ft_get_param(t_alst **data, char **argv, int argc);
int		ft_aff_lst(t_alst *data, t_term *e, int j);
void	ft_aff_elem(t_alst *data, t_term *e, int cursor);
int		ft_travel_lst(t_alst *data, t_term *e);
int		ft_printchar(int c);
int		key_hook(t_alst *data);
void	ft_quit(t_alst *data);
void	ft_return_lst(t_alst *data);
#endif
