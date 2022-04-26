/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:13:55 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/25 22:05:44 by mhugueno         ###   ########.fr       */
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
	int	count_E;
	int	count_C;
	int	count_P;

	i = 0;
	count_E = 0;
	count_C = 0;
	count_P = 0;
	while (program->map_str[i])
	{
		if (program->map_str[i] == 69)
			count_E++;
		if (program->map_str[i] == 67)
			count_C++;
		if (program->map_str[i] == 80)
			count_P++;
		i++;
	}
	if (count_C < 1 || count_E < 1 || count_P < 1)
	{
		ft_printf("%s", "Error\n");
		ft_printf("%s", "Dude, i need more content to build a map.");
		exit (0);
	}
}

void	check_map_error(t_program *program)
{
	if (program->window.size.x == program->map.window.size.y)
	{
		ft_printf("%s", "Error\n");
		ft_printf("%s", "I can't read square mate i'm sorry.");
		exit (0);
	}
	ft_check_map_error_upper_wall(program);
	ft_check_map_error_lower_wall(program);
	ft_check_map_error_content(program);
}
