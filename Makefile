NAME	=	libft.a
CFILES	=	ft_memset.c	\
		ft_bzero.c	\
		ft_memcpy.c	\
		ft_memccpy.c	\
		ft_memmove.c	\
		ft_memchr.c	\
		ft_memcmp.c	\
		ft_strlen.c	\
		ft_strdup.c	\
		ft_strcpy.c	\
		ft_strnew.c	\
		ft_strncpy.c	\
		ft_strcat.c	\
		ft_strncat.c	\
		ft_strlcat.c	\
		ft_strchr.c	\
		ft_strrchr.c	\
		ft_strstr.c	\
		ft_strnstr.c	\
		ft_strcmp.c	\
		ft_strncmp.c	\
		ft_atoi.c	\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_isupper.c	\
		ft_islower.c	\
		ft_toupper.c	\
		ft_tolower.c	\

OFILES	=	$(CFILES:.c=.o)	\
		libft.h.gch

HFILES	=	./libft.h
CC	=	gcc
FLAGS	=	-Wall -Werror -Wextra

all: $(NAME)

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
