/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:13:55 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 13:40:27 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_check_map_error_upper_wall(t_program *program)
{
	int	i;

	i = 0;
	while (program->map_str[i] != '\n')
	{
		if (program->map_str[i] != 49)
		{
			ft_printf("%s", "Error\n");
			ft_printf("%s", "Man, this map has holes ? C'mon !");
			exit (0);
		}
		i++;
	}
}

void	ft_check_map_error_lower_wall(t_program *program)
{
	int	i;

	i = 0;
	while (program->map_str[i] != '\0')
		i++;
	i -= 2;
	while (program->map_str[i] != '\n')
	{
		if (program->map_str[i] != 49)
		{
			ft_printf("%s", "Error\n");
			ft_printf("%s", "Man, this map has holes ? C'mon !");
			exit (0);
		}
		i--;
	}
}

void	ft_check_map_error_content(t_program *program)
{
	int	i;
	int	count_e;
	int	count_c;
	int	count_p;

	i = 0;
	count_e = 0;
	count_c = 0;
	count_p = 0;
	while (program->map_str[i])
	{
		if (program->map_str[i] == 69)
			count_e++;
		if (program->map_str[i] == 67)
			count_c++;
		if (program->map_str[i] == 80)
			count_p++;
		i++;
	}
	if (count_c < 1 || count_e < 1 || count_p < 1)
	{
		ft_printf("%s", "Error\n");
		ft_printf("%s", "Dude, i need more content to build a map.");
		exit (0);
	}
}

void	ft_check_map_square_error(t_program *program)
{
	if (program->window.size.x == program->window.size.y)
	{
		ft_printf("%s", "Error\n");
		ft_printf("%s", "I can't read square mate i'm sorry.");
		exit (0);
	}
}

void	check_map_error(t_program *program)
{
	ft_check_map_square_error(program);
	ft_check_map_error_upper_wall(program);
	ft_check_map_error_lower_wall(program);
	ft_check_map_error_left_wall(program);
	ft_check_map_error_right_wall(program);
	ft_check_map_error_content(program);
}
