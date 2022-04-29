/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks_keyboard.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:30:59 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 10:38:02 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_input(int key, void *param)
{
	t_program	*program = (t_program *)param;

	if (key == 53)
		exit (0);
	if (key == 49)
		ft_attack_animation(program);
	program->frame = 0;
	if (key == 2 || key == 0)
	{
		ft_animation_run(key, program);
		return (0);
	}
	ft_map(program);
	if ((key == 13 || key == 1) && (ft_check_up(program) || ft_check_down(program)))
	{
		ft_animation_climb(key, program);
		return (0);
	}
	mlx_put_image_to_window(program->mlx, program->window.reference, program->iddle_1.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
	return (0);
}

void	ft_iddle_animation_1(t_program *program)
{
	if (program->frame == (ANIMATION_FRAMES * 8))
	{
		ft_map(program);
		ft_iddle_5(program);
	}
	if (program->frame == (ANIMATION_FRAMES * 9))
	{
		ft_map(program);
		ft_iddle_6(program);
	}
	if (program->frame == (ANIMATION_FRAMES * 10))
	{
		ft_map(program);
		ft_iddle_7(program);
	}
	if (program->frame == (ANIMATION_FRAMES * 11))
	{
		ft_map(program);
		ft_iddle_8(program);
		program->frame = 0;
	}
}

void	ft_iddle_animation(t_program *program)
{
	if (program->frame == (ANIMATION_FRAMES * 5))
	{
		ft_map(program);
		ft_iddle_2(program);
	}
	if (program->frame == (ANIMATION_FRAMES * 6))
	{
		ft_map(program);
		ft_iddle_3(program);
	}
	if (program->frame == (ANIMATION_FRAMES * 7))
	{
		ft_map(program);
		ft_iddle_4(program);
	}
	ft_iddle_animation_1(program);
}

int	ft_update(void *param)
{
	t_program	*program = (t_program *)param;

	program->frame++;
	ft_iddle_animation(program);
	return (0);
}

void	ft_attack_animation(t_program *program)
{
	if (program->iddle_1.sp_pos.x < program->spike_trap.sp_pos.x + 100)
	{
		program->spike_trap.sp_pos.x -= 100;
		ft_map(program);
	}
}
