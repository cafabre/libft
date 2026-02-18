#include "get_next_line.h"

static char	*ft_strjoin_part(char *str, char *store, char *buffer)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (store[++i])
		str[i] = store[i];
	j = 0;
	while (buffer[j])
		str[i++] = buffer[j++];
	str[i] = '\0';
	free(store);
	return (str);
}

char	*join_and_free(char *store, char *buffer)
{
	char	*str;
	size_t	len;

	if (!store)
	{
		store = malloc(sizeof(char));
		if (!store)
			return (NULL);
		store[0] = '\0';
	}
	if (!buffer)
		return (store);
	len = ft_strlen(store) + ft_strlen(buffer);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		free(store);
		return (NULL);
	}
	return (ft_strjoin_part(str, store, buffer));
}

void	copy_remaining(char *new_store, char *store, int i)
{
	int	j;

	j = 0;
	while (store[i])
		new_store[j++] = store[i++];
	new_store[j] = '\0';
}
