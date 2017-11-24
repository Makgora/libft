# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tparand <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 16:46:58 by tparand           #+#    #+#              #
#    Updated: 2017/11/21 19:17:27 by tparand          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_atoi.c	\
		ft_bzero.c	\
		ft_factorial.c	\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_islower.c	\
		ft_isprint.c	\
		ft_isupper.c	\
		ft_itoa.c	\
		ft_lstadd.c	\
		ft_lstaddend.c	\
		ft_lstdel.c	\
		ft_lstdelone.c	\
		ft_lstgetlast.c	\
		ft_lstislast.c	\
		ft_lstiter.c	\
		ft_lstmap.c	\
		ft_lstnew.c	\
		ft_memalloc.c	\
		ft_memccpy.c	\
		ft_memchr.c	\
		ft_memcmp.c	\
		ft_memcpy.c	\
		ft_memdel.c	\
		ft_memmove.c	\
		ft_memset.c	\
		ft_putchar.c	\
		ft_putchar_fd.c	\
		ft_putendl.c	\
		ft_putendl_fd.c	\
		ft_putnbr.c	\
		ft_putnbr_fd.c	\
		ft_putstr.c	\
		ft_putstr_fd.c	\
		ft_strcat.c	\
		ft_strchr.c	\
		ft_strclen.c	\
		ft_strclr.c	\
		ft_strcmp.c	\
		ft_strcpy.c	\
		ft_strdel.c	\
		ft_strdup.c	\
		ft_strequ.c	\
		ft_striter.c	\
		ft_striteri.c	\
		ft_strjoin.c	\
		ft_strlcat.c	\
		ft_strlen.c	\
		ft_strmap.c	\
		ft_strmapi.c	\
		ft_strncat.c	\
		ft_strncmp.c	\
		ft_strncpy.c	\
		ft_strndup.c	\
		ft_strnequ.c	\
		ft_strnew.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_strsplit.c	\
		ft_strstr.c	\
		ft_strsub.c	\
		ft_strtrim.c	\
		ft_strwcount.c	\
		ft_swap.c	\
		ft_tolower.c	\
		ft_toupper.c


OBJS	=	$(SRCS:.c=.o)
H	=	./libft.h
CC	=	gcc
CFLAGS	=	-c -Wall -Werror -Wextra

all: $(NAME)
	@echo "\033[1;34mLibft\t\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"
	@echo

$(NAME): $(OBJS)
	@echo
	@echo "\033[1;34mLibft\t\t\033[1;33mMaking lib\t\033[0;32m[OK]\033[0m"
	@echo
	ar rc $@ $(OBJS)
	@echo
	@echo "\033[1;34mLibft\t\t\033[1;33mIndexing lib\t\033[0;32m[OK]\033[0m"
	@echo
	ranlib $@
	@echo

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -iquote $(H)

clean:
	@echo
	@echo "\033[1;34mLibft\t\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"
	@echo
	rm -Rf $(OBJS)
	@echo

fclean: clean
	@echo
	@echo "\033[1;34mLibft\t\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"echo
	@echo
	rm -Rf $(NAME)
	@echo

re: fclean all

.PHONY: clean fclean
