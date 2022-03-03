#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H


#include<fcntl.h> 
#include<errno.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
int		ft_strchr(char *s, int c);
char 	*get_next_line(int fd);
size_t	ft_strlcat(char	*dst, const char	*src, size_t dstsize);



#endif