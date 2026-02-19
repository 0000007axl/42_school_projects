# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 15:03:48 by trakotos          #+#    #+#              #
#    Updated: 2026/02/19 14:56:46 by trakotos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES = \
		main.c \
		push_swap.c \
		lst_manager.c \
		lst_utils.c \
		rotate_func.c\
		r_rotate_func.c\
		push_func.c\
		swap_func.c\
		simple_sort.c\
		utils.c\
		input_parse.c\
		medium_sort.c\
		complex_sort.c\
		adaptive_sort.c\
		bench.c

HEADERS = push_swap.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJECTS=$(SOURCES:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C ft_printf
	$(CC) $(CFLAGS) $(OBJECTS) ./ft_printf/libftprintf.a -o $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: $(NAME) all
