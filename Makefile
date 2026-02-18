# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 15:03:48 by trakotos          #+#    #+#              #
#    Updated: 2026/02/18 11:35:07 by trakotos         ###   ########.fr        #
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

all: $(NAME)

$(NAME): $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)

.PHONY: $(NAME) all
