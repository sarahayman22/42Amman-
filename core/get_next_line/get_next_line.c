/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:24:50 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/10/14 13:58:08 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

char	*ft_read(int fd, char *new_buffer)
{
	char		*buffer;
	char		*line_com;
	ssize_t		read_res;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	while (!ft_strchr(new_buffer, '\n'))
	{
		read_res = read(fd, buffer, BUFFER_SIZE);
		if (read_res <= 0)
		{
			free(buffer);
			if ((read_res == 0 && new_buffer[0] == '\0') || read_res == -1)
				return (free(new_buffer), NULL);
			return (new_buffer);
		}
		buffer[read_res] = '\0';
		line_com = ft_strjoin(new_buffer, buffer);
		free(new_buffer);
		new_buffer = line_com;
	}
	free(buffer);
	return (new_buffer);
}

char	*get_final_line(char **new_buffer, char *line)
{
	char	*final_line;
	char	*newline_pos;
	int		len;

	newline_pos = ft_strchr(line, '\n');
	if (newline_pos)
	{
		len = (newline_pos - line + 1);
		final_line = malloc(len + 1);
		if (!final_line)
		{
			free(line);
			return (NULL);
		}
		ft_strlcpy(final_line, line, len + 1);
		*new_buffer = ft_strdup(newline_pos + 1);
		free(line);
		return (final_line);
	}
	else
	{
		*new_buffer = ft_strdup("");
		return (line);
	}
}

char	*get_next_line(int fd)
{
	static char	*new_buffer = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!new_buffer)
		new_buffer = ft_strdup("");
	new_buffer = ft_read(fd, new_buffer);
	if (!new_buffer)
		return (NULL);
	line = get_final_line(&new_buffer, new_buffer);
	if (!line)
	{
		free(new_buffer);
		new_buffer = (NULL);
		return (NULL);
	}
	return (line);
}

#include"get_next_line.h"
#include <stdio.h>

int main() {
    int fd = open("a.txt", O_RDONLY);

    if (fd == -1) {
        perror("Error opening file");
        return 1;
        }
	char *str ;

    while ((str = get_next_line(fd)) != NULL)
    {
    	//char *str = get_next_line(fd);
    	//if (str)
    	//{
        	printf("%s", str);
        	free(str);
       // }

    }

    close(fd);
    return 0;
}
