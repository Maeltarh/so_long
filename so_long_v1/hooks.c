/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:30:59 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/28 16:38:52 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_input(int key, void *param)
{
	t_program	*program = (t_program *)param;

	if (key == 53)
		exit (0);
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
	/*if (program->iddle_1.sp_pos.y < (program->window.size.y - 100))
	{
		program->iddle_1.sp_pos.y += 2;
		ft_map(program);
		mlx_put_image_to_window(program->mlx, program->window.reference, program->iddle_1.sprite.reference,
			program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
	}
	if (program->iddle_1.sp_pos.y > (program->window.size.y - 100))
	{
		program->iddle_1.sp_pos.y--;
		ft_map(program);
		mlx_put_image_to_window(program->mlx, program->window.reference, program->iddle_1.sprite.reference,
			program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
	}*/
	return (0);
}

int	ft_score_board(void *param)
{
	t_program	*program = (t_program *)param;
	char	*str;

	str = ft_itoa(program->count_int.movement_count);
	mlx_string_put(program->mlx, program->window.reference, 10, 50, 0xccccff, str);
	return (0);
}
