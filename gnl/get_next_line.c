#include "get_next_line.h"

static char	*read_and_store(int fd, char *store)
{
	char	*buffer;
	ssize_t	bytes_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
	{
		free(store);
		return (NULL);
	}
	bytes_read = 1;
	while (bytes_read > 0 && (!store || !ft_strchr(store, '\n')))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			free(store);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		store = join_and_free(store, buffer);
	}
	free(buffer);
	return (store);
}

static char	*extract_line(char *store)
{
	char	*line;
	int		i;

	if (!store || store[0] == '\0')
		return (NULL);
	i = 0;
	while (store[i] && store[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1 + (store[i] == '\n')));
	if (!line)
		return (NULL);
	i = 0;
	while (store[i] && store[i] != '\n')
	{
		line[i] = store[i];
		i++;
	}
	if (store[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*update_store(char *store)
{
	char	*new_store;
	int		i;

	if (!store)
		return (NULL);
	i = 0;
	while (store[i] && store[i] != '\n')
		i++;
	if (store[i] == '\n')
		i++;
	if (!store[i])
	{
		free(store);
		return (NULL);
	}
	new_store = malloc(sizeof(char) * (ft_strlen(&store[i]) + 1));
	if (!new_store)
	{
		free(store);
		return (NULL);
	}
	copy_remaining(new_store, store, i);
	free(store);
	return (new_store);
}

char	*get_next_line(int fd)
{
	static char	*store;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 0)
	{
		free(store);
		store = NULL;
		return (NULL);
	}
	store = read_and_store(fd, store);
	if (!store)
		return (NULL);
	line = extract_line(store);
	if (!line)
	{
		free(store);
		store = NULL;
		return (NULL);
	}
	store = update_store(store);
	return (line);
}
