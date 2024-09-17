# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_atoi.c    ft_isalnum.c  ft_isdigit.c  ft_memcmp.c   ft_memset.c  ft_strlcat.c  ft_strncmp.c  ft_tolower.c \
		ft_bzero.c   ft_isalpha.c  ft_isprint.c  ft_memcpy.c   ft_strchr.c  ft_strlcpy.c  ft_strnstr.c  ft_toupper.c \
		ft_calloc.c  ft_isascii.c  ft_memchr.c   ft_memmove.c  ft_strdup.c  ft_strlen.c   ft_strrchr.c  test.c \
		ft_substr.c  ft_strjoin.c \

OBJS = $(SRCS:.c=.o)
NAME = libft.a
RM = rm -f
#AR = ar rcs 

# Regla principal

all: $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar archivos objeto
clean:
	$(RM) $(OBJS)

# Regla para limpiar archivos objeto y el ejecutable
fclean: clean
	$(RM) $(NAME)

# Regla para recompilar
re: fclean all

# Evitar que se trate clean, fclean y re como archivos
.PHONY: all clean fclean re 