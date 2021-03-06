# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/08 16:32:33 by npineau           #+#    #+#              #
#    Updated: 2014/01/11 19:13:26 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_select

SRCDIR = sources

OBJDIR = objects

INCDIR = includes

LIBH = sources/libft/includes

SRC = ft_aff_lst.c \
	  ft_get_param.c \
	  ft_new_alst.c \
	  ft_select.c \
	  ft_term.c \
	  ft_printchar.c \
	  ft_travel_lst.c \
	  ft_aff_elem.c \
	  key_hook.c \
	  ft_return.c \
	  ft_quit.c \
	  main.c

LIB = libft

SRC_PREF = $(addprefix $(SRCDIR)/, $(SRC))

OBJ = $(SRC:.c=.o)

OBJ_PREF = $(addprefix $(OBJDIR)/, $(OBJ))

all: $(LIB) $(OBJDIR) $(NAME)

$(LIB):
	make -C $(SRCDIR)/$(LIB)

$(NAME): $(OBJ_PREF)
		gcc -o $@ $^ -ltermcap -L $(SRCDIR)/$(LIB) -lft

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	gcc -o $@ -c $< -I $(INCDIR) -I $(LIBH) -O3 -Wall -Wextra -Werror

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	@echo "Removing $(OBJDIR)."
	@rm -Rf $(OBJDIR)

fclean: clean
	@echo "Removing $(NAME)."
	@rm -f $(NAME)

re: fclean all
