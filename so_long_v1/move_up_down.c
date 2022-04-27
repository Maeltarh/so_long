/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up_down.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:26:55 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/27 13:38:15 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_up(t_program *program)
{
	int	i;
	int	count;

	if (((program->iddle_1.sp_pos.x - 10) % 50) != 0)
		return (0);
	i = 0;
	count = 0;
	while (count != (program->iddle_1.sp_pos.y / 50))
	{
		if (program->map_str[i] == '\n')
			count++;
		i++;
	}
	if (program->map_str[i + ((program->iddle_1.sp_pos.x / 50))] == 51)
		return (1);
	return (0);
}

int	ft_check_down(t_program *program)
{
	int	i;
	int	count;

	if (((program->iddle_1.sp_pos.x - 10) % 50) != 0)
		return (0);
	i = 0;
	count = 0;
	while (count != ((program->iddle_1.sp_pos.y / 50) + 1))
	{
		if (program->map_str[i] == '\n')
			count++;
		i++;
	}
	if (program->map_str[i + ((program->iddle_1.sp_pos.x / 50))] == 51)
		return (1);
	return (0);
}
