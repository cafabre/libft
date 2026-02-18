#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_get_next_line(int fd);
char	*join_and_free(char *store, char *buffer);
void	copy_remaining(char *new_store, char *store, int i);

#endif
