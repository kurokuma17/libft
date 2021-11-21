# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 20:12:59 by trnguyen          #+#    #+#              #
#    Updated: 2021/11/21 19:48:29 by trnguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c \
					ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
					ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strncpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memccpy.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c ft_strmapi.c ft_strjoin.c ft_strsub.c \
					ft_strtrim.c ft_strsplit.c ft_itoa.c \
					ft_putchar.c ft_putstr.c ft_putnbr.c ft_putendl.c \
                    ft_memalloc.c ft_memdel.c \
                    ft_strcmp.c \
                    ft_strcpy.c ft_strcat.c ft_strncat.c \
                    ft_strstr.c ft_strrchr.c \
                    ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
                    ft_strmap.c ft_strequ.c ft_strnequ.c \
					ft_lstnew.c ft_lstadd.c ft_lstdelone.c ft_lstiter.c

					
OBJS			= $(SRCS:.c=.o)


BONUS_OBJS		= $(BONUS:.c=.o)

CC				= @ gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				@ ar rcs $(NAME) $(OBJS)
				@ $(RM) $(OBJS)
				
clean:
				@ $(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				@ $(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				@ ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			@ all clean fclean re bonus
