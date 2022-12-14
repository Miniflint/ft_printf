# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 16:45:56 by tgoel             #+#    #+#              #
#    Updated: 2022/04/03 18:41:32 by tgoel            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c ft_puthex_fd.c ft_putchar_fd.c ft_puthex_fd.c ft_putnbr_fd.c ft_putstr_fd.c
NAME	=	libftprintf.a
CfLAGS	=	-Wall -Wextra -Werror
CC		=	cc
OBJS	=	${SRCS:.c=.o}
RM		=	rm -f

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean all
