/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_sideways.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:05:22 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 12:38:30 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_check_right(t_program *program)
{
	int	i;
	int	count;

	if (program->iddle_1.sp_pos.x == program->spike_trap.sp_pos.x + 10)
	{
		printf("\rGame over !");
		exit (0);
	}
	if (((program->iddle_1.sp_pos.x - 10) % 50) != 0)
		return (1);
	i = 0;
	count = 0;
	while (count != (program->iddle_1.sp_pos.y / 50))
	{
		if (program->map_str[i] == '\n')
			count++;
		i++;
	}
	if (program->map_str[i + ((program->iddle_1.sp_pos.x / 50)) + 1] == 49)
		return (0);
	return (1);
}

int	ft_check_left(t_program *program)
{
	int	i;
	int	count;

	if (program->iddle_1.sp_pos.x == program->spike_trap.sp_pos.x + 10)
	{
		printf("\rGame over !");
		exit (0);
	}
	if ((program->iddle_1.sp_pos.x % 50) != 0)
		return (1);
	i = 0;
	count = 0;
	while (count != (program->iddle_1.sp_pos.y / 50))
	{
		if (program->map_str[i] == '\n')
			count++;
		i++;
	}
	if (program->map_str[i + (program->iddle_1.sp_pos.x / 50) - 1] == 49)
		return (0);
	return (1);
}

void	ft_animation_run_right(int frames, t_program *program)
{
	ft_map(program);
	if (ft_check_right(program) && ft_check_lower_right(program))
	{
		program->spike_trap.sp_pos.x += 10;
		program->iddle_1.sp_pos.x += 10;
	}
	if (frames == 1)
		ft_run_1_right(program);
	if (frames == 2)
		ft_run_2_right(program);
	if (frames == 3)
		ft_run_3_right(program);
	if (frames == 4)
	{
		ft_run_4_right(program);
		frames = 0;
	}
}

void	ft_animation_run_left(int frames, t_program *program)
{
	ft_map(program);
	if (ft_check_left(program) && ft_check_lower_left(program))
	{
		program->spike_trap.sp_pos.x += 10;
		program->iddle_1.sp_pos.x -= 10;
	}
	if (frames == 1)
		ft_run_1_left(program);
	if (frames == 2)
		ft_run_2_left(program);
	if (frames == 3)
		ft_run_3_left(program);
	if (frames == 4)
	{
		ft_run_4_left(program);
		frames = 0;
	}
}

int	ft_animation_run(int key, t_program *program)
{
	static int	frames;

	program->count_int.movement_count++;
	ft_printf_count(program);
	if (frames == 4)
		frames = 0;
	frames ++;
	if (key == 2)
		ft_animation_run_right(frames, program);
	if (key == 0)
		ft_animation_run_left(frames, program);
	return (0);
}
