/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:13:11 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/28 16:40:36 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_printf_count(t_program *program)
{
	char	*str_1;

	str_1 = ft_itoa(program->count_int.movement_count);
	mlx_string_put(program->mlx, program->window.reference, 0, 15, 0xccccff, "Mouvement count :");
	mlx_string_put(program->mlx, program->window.reference, 175, 15, 0xccccff, str_1);
	ft_printf("\rMouvement count : %d	Item count : %d", program->count_int.movement_count, program->count_int.item_count);
}
