CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
SOURCES = ft_isalnum.c ft_itoa.c ft_strsplit.c ft_strncpy.c ft_putchar.c \
ft_isprint.c ft_memmove.c ft_strchr.c ft_putstr_fd.c ft_memalloc.c ft_memset.c \
ft_strlcat.c ft_strnstr.c ft_strcpy.c ft_strncat.c ft_strstr.c ft_putchar_fd.c \
ft_memcpy.c ft_strsub.c ft_strnequ.c ft_strrchr.c ft_strcat.c ft_strmapi.c \
ft_strlen.c ft_strdup.c ft_strtrim.c ft_strclr.c ft_putnbr_fd.c ft_strnew.c \
ft_strncmp.c ft_strdel.c ft_isascii.c ft_isalpha.c ft_strcmp.c ft_putendl_fd.c \
ft_memchr.c ft_memccpy.c ft_memcmp.c ft_putstr.c ft_toupper.c ft_strequ.c \
ft_tolower.c ft_putnbr.c ft_isdigit.c ft_atoi.c ft_striter.c ft_striteri.c \
ft_strjoin.c ft_putendl.c ft_strmap.c ft_bzero.c ft_memdel.c
INCLUDES = libft.h
OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCES) $(INCLUDES)
	$(CC) $(CFLAGS) $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
