# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trnguyen <trnguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 16:36:51 by trnguyen          #+#    #+#              #
#    Updated: 2021/12/11 13:59:14 by trnguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS1	=	part1/part1_atoi.c part1/part1_bzero.c part1/part1_isalnum.c \
			part1/part1_isalpha.c part1/part1_isascii.c part1/part1_isdigit.c \
			part1/part1_isprint.c part1/part1_memccpy.c part1/part1_memchr.c \
			part1/part1_memcmp.c part1/part1_memcpy.c part1/part1_memmove.c \
			part1/part1_memset.c part1/part1_strcat.c part1/part1_strchr.c \
			part1/part1_strcmp.c part1/part1_strcpy.c part1/part1_strdup.c \
			part1/part1_strlcat.c part1/part1_strlen.c part1/part1_strncat.c \
			part1/part1_strncmp.c part1/part1_strncpy.c part1/part1_strnstr.c \
			part1/part1_strrchr.c part1/part1_strstr.c part1/part1_tolower.c \
			part1/part1_toupper.c
SRCS2	=	part2/part2_itoa.c part2/part2_memalloc.c part2/part2_memdel.c \
			part2/part2_putchar.c part2/part2_putchar_fd.c part2/part2_putendl.c \
			part2/part2_putendl_fd.c part2/part2_putnbr.c part2/part2_putnbr_fd.c \
			part2/part2_putstr.c part2/part2_putstr_fd.c part2/part2_strclr.c \
			part2/part2_strdel.c part2/part2_strequ.c part2/part2_striter.c \
			part2/part2_striteri.c part2/part2_strjoin.c part2/part2_strmap.c \
			part2/part2_strmapi.c part2/part2_strnequ.c part2/part2_strnew.c \
			part2/part2_strsplit.c part2/part2_strsub.c part2/part2_strtrim.c
			
SRCSB	=	bonus/bonus_lstnew.c bonus/bonus_lstdelone.c bonus/bonus_lstdel.c \
			bonus/bonus_lstadd.c bonus/bonus_lstiter.c bonus/bonus_lstmap.c

INCLUDES =	libftest.h utils.h
OBJS 		= *.o
LIB			= ../libft.a
CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror
LFLAGS		= -L.. -lft

NAME		= libft_test

all:		$(NAME)

$(NAME):	obj1 obj2 objb $(LIB)
			@ $(CC) $(CFLAGS) -I. $(INCLUDES) -c  utils.c main.c
			$(CC) $(CFLAGS) -L.. -lft *.o -o $(NAME)
		
obj1:		$(SRCS1)
			@ $(CC) $(CFLAGS) -c $(SRCS1) 
obj2:		$(SRCS2)
			@ $(CC) $(CFLAGS) -c $(SRCS2)
objb:		$(SRCSB)
			@ $(CC) $(CFLAGS) -c $(SRCSB)
normcheck:
			norminette ../*.c ../libft.h
makecheck:
			make fclean && make all && make re && make clean > make_check

clean:
			@ $(RM) $(OBJS) *.txt *.gch

fclean:		clean
			@ $(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		@ all clean fclean re bonus
