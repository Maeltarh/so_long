/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up_down.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:26:55 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/28 16:43:28 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_up(t_program *program)
{
	int	i;
	int	count;

	if (program->iddle_1.sp_pos.x == program->spike_trap.sp_pos.x)
	{
		printf("\rGame over !");
		exit (0);
	}
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

	if (program->iddle_1.sp_pos.x == program->spike_trap.sp_pos.x)
	{
		printf("\rGame over !");
		exit (0);
	}
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

void	ft_animation_climb_1(int frames, t_program *program)
{
	program->spike_trap.sp_pos.x += 10;
	ft_map(program);
//	ft_spike_trap(program);
	if (frames == 1)
		ft_climb_1(program);
	if (frames == 2)
		ft_climb_2(program);
	if (frames == 3)
		ft_climb_3(program);
	if (frames == 4)
		ft_climb_4(program);
	if (frames == 5)
		ft_climb_5(program);
	if (frames == 6)
	{
		ft_climb_6(program);
		frames = 0;
	}
}

int	ft_animation_climb(int key, t_program *program)
{
	static int	frames;

	program->count_int.movement_count++;
	ft_printf_count(program);
	if (frames == 6)
		frames = 0;
	frames ++;
	if (key == 13 && ft_check_up(program))
	{
		program->iddle_1.sp_pos.y -= 50;
		ft_animation_climb_1(frames, program);
	}
	else if (key == 1 && ft_check_down(program))
	{
		program->iddle_1.sp_pos.y += 50;
		ft_animation_climb_1(frames, program);
	}
	else
	{
		mlx_put_image_to_window(program->mlx, program->window.reference, program->iddle_1.sprite.reference,
			program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
	}
	return (0);
}
