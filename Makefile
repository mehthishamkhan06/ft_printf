# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohkhan <mohkhan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/30 14:57:55 by mohkhan           #+#    #+#              #
#    Updated: 2024/06/30 15:10:13 by mohkhan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c ft_putchar.c ft_putstr.c ft_hexaddr.c \
						ft_rnputnbr.c ft_unsignint.c ft_hexsm.c ft_hexcap.c\

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
