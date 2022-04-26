/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:52:45 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/22 12:11:15 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!s1 || !s2)
		return (NULL);
	tmp = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!(tmp))
		return (NULL);
	while (s1[i] != '\0')
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2[n] != '\0')
	{
		tmp[i + n] = s2[n];
		n++;
	}
	tmp[i + n] = '\0';
	free ((char *)s1);
	return (tmp);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*call;
	size_t	cur;

	call = malloc(count * size);
	if (!call)
		return (0);
	cur = -1;
	while (++cur < size * count)
		call[cur] = 0;
	return (call);
}

char	*get_map(t_program *program, char *map)
{
	char	*buf;
	char	*str;
	int		nbr;
	int		fd;

	fd = open(map, O_RDONLY);
	buf = ft_calloc(((BUFFER_SIZE / BUFFER_SIZE) + 1), sizeof(char));
	str = NULL;
	nbr = read(fd, buf, (BUFFER_SIZE / BUFFER_SIZE));
	if (nbr > 0)
		str = ft_calloc(((BUFFER_SIZE / BUFFER_SIZE) + 1), sizeof(char));
	while (nbr > 0 && buf[0] != '\0')
	{
		str = ft_strjoin(str, buf);
		nbr = read(fd, buf,(BUFFER_SIZE / BUFFER_SIZE));
	}
	free (buf);
	ft_printf("%s", str);
	window_size(program, str);
	return (str);
}
