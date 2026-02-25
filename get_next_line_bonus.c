/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 11:34:10 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/25 09:54:54 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_buffer(int fd, char *buffer)
{
	char	*content;
	ssize_t	size;

	content = NULL;
	content = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (content == NULL)
	{
		if (buffer != NULL)
			free(buffer);
		return (NULL);
	}
	size = 1;
	while (size > 0 && ft_strchr(buffer, '\n') == NULL)
	{
		size = read(fd, content, BUFFER_SIZE);
		if (size > 0)
		{
			content[size] = '\0';
			buffer = ft_strjoin_2string(buffer, content);
		}
	}
	free(content);
	return (buffer);
}

char	*get_line(char **buffer)
{
	char	*line;
	char	*tmp;

	line = ft_substr_(*buffer, 0, ft_index_of(*buffer, '\n') + 1);
	if (line == NULL)
		return (NULL);
	if ((*buffer)[ft_index_of(*buffer, '\n')] == '\0')
	{
		free(*buffer);
		*buffer = NULL;
		return (line);
	}
	tmp = ft_substr_(*buffer, ft_index_of(*buffer, '\n') + 1,
			ft_index_of((*buffer) + ft_index_of(*buffer, '\n') + 1, '\0'));
	if (tmp == NULL)
	{
		free(line);
		return (NULL);
	}
	free(*buffer);
	*buffer = tmp;
	return (line);
}

char	*get_next_line(int fd, int is_free_stach)
{
	static char	*buffer;
	char		*line;

	line = NULL;
	if (is_free_stach)
		free(buffer);
	if (fd < 0 || BUFFER_SIZE <= 0 || is_free_stach)
		return (NULL);
	buffer = get_buffer(fd, buffer);
	if (ft_index_of(buffer, '\0') == 0)
	{
		if (buffer != NULL)
			free(buffer);
		return (NULL);
	}
	line = get_line(&buffer);
	if (line == NULL)
	{
		if (buffer != NULL)
			free(buffer);
		return (NULL);
	}
	return (line);
}
