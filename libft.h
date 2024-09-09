#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h> //para el size_t
# include <stdlib.h> //para el malloc y el free
# include <unistd.h> //para el write
# include <stdio.h>

void	*ft_memset(void *b, int c, size_t size);
void	ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void * src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);

#endif