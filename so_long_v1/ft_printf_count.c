/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:13:11 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/27 13:11:25 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_printf_count(t_program *program)
{
	ft_printf("\rMouvement count : %d	Item count : %d", program->count_int.movement_count, program->count_int.item_count);
}
