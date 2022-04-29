/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:49:02 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 10:31:59 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_program	program;

	if (argc != 2)
		return (0);
	program.map_str = get_map(&program, argv[1]);
	check_map_error(&program);
	program.count_int.movement_count = 0;
	program.count_int.item_count = 0;
	program.mlx = mlx_init();
	program.window = ft_new_window(program.mlx, program.window.size.x, program.window.size.y, "Hello World!");
	ft_map(&program);
	ft_iddle_1(&program);
	mlx_hook(program.window.reference, 2, 0, *ft_input, &program);
	mlx_loop_hook(program.mlx, *ft_update, &program);
	mlx_loop(program.mlx);
}
