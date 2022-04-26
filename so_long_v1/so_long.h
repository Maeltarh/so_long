/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 08:56:27 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 12:14:27 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <mlx.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "./ft_printf/ft_printf.h"

#ifndef ANIMATION_FRAMES
# define ANIMATION_FRAMES 2000
#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

typedef struct	s_vector
{
	int x;
	int y;
}		t_vector;

typedef struct	s_count_vector
{
	int movement_count;
	int item_count;
}		t_count_vector;

typedef struct	s_sprite
{
	void		*reference;
	t_vector	size;
	char		*addr;
	int			bits_per_pixel;
	int			line_lenght;
	int			endian;
	int			colour;
	char		*path;
}		t_sprite;

typedef struct	s_window
{
	void		*reference;
	t_vector	size;
}		t_window;

typedef struct	s_sprite_template
{
	void		*mlx;
	t_window	window;
	t_sprite	sprite;
	t_vector	sprite_position;
}		t_sprite_template;

typedef struct	s_program
{
	char					*map_str;
	void					*mlx;
	t_window				window;
	t_sprite				sprite;
	t_vector				sprite_position;
	t_count_vector			count_int;
	int						frame;
	t_sprite_template		background;
	t_sprite_template		map;
	t_sprite_template		iddle_1;
	t_sprite_template		iddle_2;
	t_sprite_template		iddle_3;
	t_sprite_template		iddle_4;
	t_sprite_template		iddle_5;
	t_sprite_template		iddle_6;
	t_sprite_template		iddle_7;
	t_sprite_template		iddle_8;
	t_sprite_template		run_1_right;
	t_sprite_template		run_2_right;
	t_sprite_template		run_3_right;
	t_sprite_template		run_4_right;
	t_sprite_template		run_1_left;
	t_sprite_template		run_2_left;
	t_sprite_template		run_3_left;
	t_sprite_template		run_4_left;
	t_sprite_template		crouch;
	t_sprite_template		fall;
	t_sprite_template		item;
}		t_program;

void		render_hero_coord(t_program *);
void		map_to_program(t_program *, char *);
void		check_map_error(t_program *);
int			window_size(t_program *, char *);
char		*get_map(t_program *, char *);
size_t		ft_strlen(const char *);
char		*ft_strjoin(const char *, const char *);
void		*ft_calloc(size_t, size_t);
t_window	ft_new_window(void *, int, int, char *);
void		render_map(int, t_program *);
t_sprite	ft_new_sprite_iddle_1(void *, char *);
t_sprite	ft_new_sprite_iddle_2(void *, char *);
t_sprite	ft_new_sprite_iddle_3(void *, char *);
t_sprite	ft_new_sprite_iddle_4(void *, char *);
t_sprite	ft_new_sprite_iddle_5(void *, char *);
t_sprite	ft_new_sprite_iddle_6(void *, char *);
t_sprite	ft_new_sprite_iddle_7(void *, char *);
t_sprite	ft_new_sprite_iddle_8(void *, char *);
t_sprite	ft_new_sprite_map(void *, char *);
t_sprite	ft_new_sprite_background(void *, char *);
t_sprite	ft_new_sprite_run_1_right(void *, char *);
t_sprite	ft_new_sprite_run_2_right(void *, char *);
t_sprite	ft_new_sprite_run_3_right(void *, char *);
t_sprite	ft_new_sprite_run_4_right(void *, char *);
t_sprite	ft_new_sprite_run_1_left(void *, char *);
t_sprite	ft_new_sprite_run_2_left(void *, char *);
t_sprite	ft_new_sprite_run_3_left(void *, char *);
t_sprite	ft_new_sprite_run_4_left(void *, char *);
t_sprite	ft_new_sprite_crouch(void *, char *);
t_sprite	ft_new_sprite_fall(void *, char *);
t_sprite	ft_new_sprite_item(void *, char *);
int			ft_check_right(t_program *);
int			ft_check_left(t_program *);
int			ft_update(void *);
int			ft_input(int , void *);
void		ft_iddle_1(t_program *);
void		ft_iddle_2(t_program *);
void		ft_iddle_3(t_program *);
void		ft_iddle_4(t_program *);
void		ft_iddle_5(t_program *);
void		ft_iddle_6(t_program *);
void		ft_iddle_7(t_program *);
void		ft_iddle_8(t_program *);
void		ft_map(t_program *);
void		ft_background(t_program *);
void		ft_run_1_right(t_program *);
void		ft_run_2_right(t_program *);
void		ft_run_3_right(t_program *);
void		ft_run_4_right(t_program *);
void		ft_run_1_left(t_program *);
void		ft_run_2_left(t_program *);
void		ft_run_3_left(t_program *);
void		ft_run_4_left(t_program *);
void		ft_crouch(t_program *);
void		ft_sprite_template(t_program *);
void		ft_fall(t_program *);
void		ft_item(int, t_program *);
void		ft_iddle_animation(t_program *);
int			ft_animation_run(int, t_program *);
void		ft_animation_run_right(int, t_program *);
void		ft_animation_run_left(int, t_program *);
void		ft_check_map_error_upper_wall(t_program *);
void		ft_printf_count(t_program *);

#endif
