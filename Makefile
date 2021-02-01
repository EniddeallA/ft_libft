# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalid <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/12 22:09:39 by akhalid           #+#    #+#              #
#    Updated: 2019/10/23 00:58:03 by akhalid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

RM = rm -rf

NAME = libft.a

SRCS =	ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_itoa.c		\
		ft_memccpy.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memset.c		\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_split.c		\
		ft_strchr.c		\
		ft_strdup.c		\
		ft_strjoin.c	\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strlen.c		\
		ft_strmapi.c	\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_strtrim.c	\
		ft_substr.c		\
		ft_tolower.c	\
		ft_toupper.c	\

BONUS_SRCS =	ft_lstadd_back_bonus.c	\
				ft_lstdelone_bonus.c	\
				ft_lstmap_bonus.c		\
				ft_lstadd_front_bonus.c	\
				ft_lstiter_bonus.c		\
				ft_lstnew_bonus.c		\
				ft_lstclear_bonus.c		\
				ft_lstlast_bonus.c		\
				ft_lstsize_bonus.c		\

OBJS = -Wall -Wextra -Werror -c

all: $(NAME)

SDIR = ./mandatory/

SRC =	$(addprefix $(SDIR), $(SRCS))

$(NAME): $(SRC)
	$(CC) $(OBJS) $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

BDIR = ./bonus/

BSRC = $(addprefix $(BDIR), $(BONUS_SRCS))

bonus: $(BSRC)
	$(CC) $(OBJS) $(BSRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

.PHONY: all bonus clean
