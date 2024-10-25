# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yyean-wa <yyean-wa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 20:52:53 by yyean-wa          #+#    #+#              #
#    Updated: 2024/10/20 01:46:41 by yyean-wa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g #-fsanitize=address
INCLUDE = -I include
LIBFT = cd libft && make --no-print-directory
LIB = libft/libft.a
REMOVE = rm -rf

SRCS =	src/ft_check_sort.c src/ft_check.c src/ft_exit.c \
		src/ft_hardcode.c src/ft_initial.c src/ft_utils.c \
		src/op_p.c src/op_r.c src/op_rr.c \
		src/op_s.c src/radix_sort.c src/push_swap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
	@$(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(REMOVE) $(OBJS)
	@cd libft && make clean --no-print-directory

fclean: clean
	@$(REMOVE) $(NAME)
	@cd libft && make fclean --no-print-directory

re: fclean all

.PHONY: all clean fclean re
