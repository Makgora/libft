#ifndef LIBFT_H
 #define LIBFT_H

 #include <unistd.h>
 #include <stdlib.h>
 #include <string.h>

 void	*ft_bzero(void *s, size_t n);
 void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
 void	*ft_memchr(const void *s, int c, size_t n);
 int	ft_memcmp(const void *s1, const void *s2, size_t n);
 void	*ft_memcpy(void *str1, const void *str2, size_t n);
 void	*ft_memmove(void *dest, const void *src, size_t n);
 void	*ft_memset(void *str, int c, size_t n);
 char	*ft_strcpy(char *dest, const char *src);
 char	*ft_strdup(const char *s);
 size_t	ft_strlen(const char *s);
 char	*ft_strnew(size_t size);

#endif
