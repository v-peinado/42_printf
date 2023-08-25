# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpeinado <vpeinado@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 20:27:34 by vpeinado          #+#    #+#              #
#    Updated: 2023/03/14 20:33:22 by vpeinado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS  		= ft_print_char.c ft_print_int.c ft_print_ptr.c ft_print_hex.c\
				ft_print_str.c ft_print_uint.c ft_printf.c
				
				
OBJS		= $(SRCS:.c=.o)

CC			= gcc
RM			= rm -fr
CFLAGS		= -Wall -Wextra -Werror -fsanitize=address -g3

all: 		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
					$(RM) $(OBJS)

fclean:				clean 
						$(RM) $(NAME)

re:					fclean $(NAME)

.PHONY:				all clean fclean re 