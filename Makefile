# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 15:03:48 by trakotos          #+#    #+#              #
#    Updated: 2026/02/08 15:06:49 by trakotos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES = \
		main.c \
		push_swap.c
HEADERS = push_swap.h
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)
