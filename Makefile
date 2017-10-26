NAME	=	libft.a
CFILES	=	ft_atoi.c	\
		ft_bzero.c	\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_islower.c	\
		ft_isprint.c	\
		ft_isupper.c	\
		ft_itoa.c	\
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
		ft_tolower.c	\
		ft_toupper.c		

OFILES	=	$(CFILES:.c=.o)	\
		libft.h.gch

HFILES	=	./libft.h
CC	=	gcc
FLAGS	=	-Wall -Werror -Wextra

all: $(NAME)

so:
	$(CC) -c $(FLAGS) -fpic $(CFILES)
	$(CC) -shared -o libft.so $(OFILES)

$(NAME):
	@echo
	@echo ">> Compilation CFILES <<"
	@echo
	$(CC) $(FLAGS) -c $(CFILES) $(HFILES)
	@echo
	@echo ">> Making LIBFT.A <<"
	@echo
	ar rc $(NAME) $(OFILES)
	@echo
	@echo ">> Indexing LIBFT.A <<"
	@echo
	ranlib $(NAME)
clean:
	@echo
	@echo ">> Cleaning OFILES <<"
	@echo
	rm -Rf $(OFILES)

fclean: clean
	@echo
	@echo ">> Cleaning LIBFT.A <<"
	@echo
	rm -Rf $(NAME)

re: fclean all

.PHONY: clean fclean
