# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 15:03:48 by trakotos          #+#    #+#              #
#    Updated: 2026/02/25 09:49:26 by trakotos         ###   ########.fr        #
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
		bench.c \
		lst_manager_2.c \
		input_parse_2.c \
		ft_strjoin.c \
		ft_split.c

BONUS = checker
BONUS_SOURCES = \
	operations_bonus.c \
	lst_manager_bonus.c \
	input_parse_bonus.c \
	execute_ops_bonus.c \
	lst_utils_bonus.c \
	main_bonus.c \
	get_next_line_bonus.c \
	get_next_line_utils_bonus.c \
	ft_split_bonus.c \
	ft_strjoin_bonus.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJECTS = $(SOURCES:.c=.o)
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)
RM = rm -f
PRINTF_DIR = ft_printf
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a


all: $(NAME)

$(NAME): $(OBJECTS)
	make -C $(PRINTF_DIR)
	$(CC) $(CFLAGS) $(OBJECTS) $(PRINTF_LIB) -o $(NAME)

bonus: $(BONUS)

$(BONUS): $(BONUS_OBJECTS)
	$(CC) $(CFLAGS) $(BONUS_OBJECTS) -o $(BONUS)

clean:
	make -C $(PRINTF_DIR) clean
	$(RM) $(OBJECTS)
	$(RM) $(BONUS_OBJECTS)

fclean: clean
	make -C $(PRINTF_DIR) fclean
	$(RM) $(NAME)
	$(RM) $(BONUS)


re: fclean all

.PHONY: all clean fclean re bonus
