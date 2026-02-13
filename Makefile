# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stda-sil <stda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 14:48:19 by stda-sil          #+#    #+#              #
#    Updated: 2024/11/22 18:58:17 by stda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
COMP = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
SRCS = ft_printf.c \
ft_print_c.c \
ft_print_di.c \
ft_print_p.c \
ft_print_s.c \
ft_print_u.c \
ft_print_x.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(COMP) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
