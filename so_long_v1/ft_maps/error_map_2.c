/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_map_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:55:45 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 13:27:24 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_check_map_error_left_wall(t_program	*program)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (count < (program->window.size.y / 50) - 1)
	{
		if (program->map_str[i] == '\n')
		{
			if (program->map_str[i + 1] != 49)
			{
				ft_printf("%s", "Error\n");
				ft_printf("%s", "Man, this map has holes ? C'mon !");
				exit (0);
			}
			count++;
		}
		i++;
	}
}

void	ft_check_map_error_right_wall(t_program	*program)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (count < (program->window.size.y / 50) - 1)
	{
		if (program->map_str[i] == '\n')
		{
			if (program->map_str[i - 1] != 49)
			{
				ft_printf("%s", "Error\n");
				ft_printf("%s", "Man, this map has holes ? C'mon !");
				exit (0);
			}
			count++;
		}
		i++;
	}
}
