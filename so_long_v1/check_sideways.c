/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sideways.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:30:26 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/27 14:55:27 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_lower_right(t_program *program)
{
	int	i;
	int	count;

	if (((program->iddle_1.sp_pos.x - 10) % 50) != 0)
		return (1);
	i = 0;
	count = 0;
	while (count != ((program->iddle_1.sp_pos.y / 50) + 1))
	{
		if (program->map_str[i] == '\n')
			count++;
		i++;
	}
	if (program->map_str[i + ((program->iddle_1.sp_pos.x / 50)) + 1] == 48)
		return (0);
	return (1);
}

int	ft_check_lower_left(t_program *program)
{
	int	i;
	int	count;

	if ((program->iddle_1.sp_pos.x % 50) != 0)
		return (1);
	i = 0;
	count = 0;
	while (count != ((program->iddle_1.sp_pos.y / 50) + 1))
	{
		if (program->map_str[i] == '\n')
			count++;
		i++;
	}
	if (program->map_str[i + (program->iddle_1.sp_pos.x / 50) - 1] == 48)
		return (0);
	return (1);
}
