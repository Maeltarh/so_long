/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 08:56:27 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 14:07:51 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# include "./ft_printf/ft_printf.h"

# ifndef ANIMATION_FRAMES
#  define ANIMATION_FRAMES 2000
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_vector
{
	int	x;
	int	y;
}		t_vector;

typedef struct s_count_vector
{
	int	movement_count;
	int	item_count;
}		t_count_vector;

typedef struct s_sprite
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

typedef struct s_window
{
	void		*reference;
	t_vector	size;
}		t_window;

typedef struct s_sprite_template
{
	void		*mlx;
	t_window	window;
	t_sprite	sprite;
	t_vector	sp_pos;
}		t_sprite_template;

typedef struct s_program
{
	char					*map_str;
	void					*mlx;
	t_window				window;
	t_sprite				sprite;
	t_vector				sp_pos;
	t_count_vector			count_int;
	int						frame;
	t_sprite_template		background;
	t_sprite_template		map;
	t_sprite_template		platform;
	t_sprite_template		left_wall;
	t_sprite_template		right_wall;
	t_sprite_template		upper_wall;
	t_sprite_template		lower_wall;
	t_sprite_template		upper_left_wall;
	t_sprite_template		upper_right_wall;
	t_sprite_template		lower_left_wall;
	t_sprite_template		lower_right_wall;
	t_sprite_template		iddle_1;
	t_sprite_template		iddle_2;
	t_sprite_template		iddle_3;
	t_sprite_template		iddle_4;
	t_sprite_template		iddle_5;
	t_sprite_template		iddle_6;
	t_sprite_template		iddle_7;
	t_sprite_template		iddle_8;
	t_sprite_template		climb_1;
	t_sprite_template		climb_2;
	t_sprite_template		climb_3;
	t_sprite_template		climb_4;
	t_sprite_template		climb_5;
	t_sprite_template		climb_6;
	t_sprite_template		run_1_right;
	t_sprite_template		run_2_right;
	t_sprite_template		run_3_right;
	t_sprite_template		run_4_right;
	t_sprite_template		run_1_left;
	t_sprite_template		run_2_left;
	t_sprite_template		run_3_left;
	t_sprite_template		run_4_left;
	t_sprite_template		attack_1;
	t_sprite_template		attack_2;
	t_sprite_template		crouch;
	t_sprite_template		fall;
	t_sprite_template		item;
	t_sprite_template		ladder;
	t_sprite_template		exite_door;
	t_sprite_template		spike_trap;
}		t_program;

void		render_hero_coord(t_program *program);
void		map_to_program(t_program *program, char *str);
void		check_map_error(t_program *program);
int			window_size(t_program *program, char *str);
char		*get_map(t_program *program, char *str);
size_t		ft_strlen(const char *str);
char		*ft_strjoin(const char *str1, const char *str2);
void		*ft_calloc(size_t x, size_t y);
t_window	ft_new_window(void *win, int x, int y, char *name);
void		render_map(int i, t_program *program);
t_sprite	ft_new_sprite_iddle_1(void *mlx, char *path);
t_sprite	ft_new_sprite_iddle_2(void *mlx, char *path);
t_sprite	ft_new_sprite_iddle_3(void *mlx, char *path);
t_sprite	ft_new_sprite_iddle_4(void *mlx, char *path);
t_sprite	ft_new_sprite_iddle_5(void *mlx, char *path);
t_sprite	ft_new_sprite_iddle_6(void *mlx, char *path);
t_sprite	ft_new_sprite_iddle_7(void *mlx, char *path);
t_sprite	ft_new_sprite_iddle_8(void *mlx, char *path);
t_sprite	ft_new_sprite_map(void *mlx, char *path);
t_sprite	ft_new_sprite_background(void *mlx, char *path);
t_sprite	ft_new_sprite_climb_1(void *mlx, char *path);
t_sprite	ft_new_sprite_climb_2(void *mlx, char *path);
t_sprite	ft_new_sprite_climb_3(void *mlx, char *path);
t_sprite	ft_new_sprite_climb_4(void *mlx, char *path);
t_sprite	ft_new_sprite_climb_5(void *mlx, char *path);
t_sprite	ft_new_sprite_climb_6(void *mlx, char *path);
t_sprite	ft_new_sprite_run_1_right(void *mlx, char *path);
t_sprite	ft_new_sprite_run_2_right(void *mlx, char *path);
t_sprite	ft_new_sprite_run_3_right(void *mlx, char *path);
t_sprite	ft_new_sprite_run_4_right(void *mlx, char *path);
t_sprite	ft_new_sprite_run_1_left(void *mlx, char *path);
t_sprite	ft_new_sprite_run_2_left(void *mlx, char *path);
t_sprite	ft_new_sprite_run_3_left(void *mlx, char *path);
t_sprite	ft_new_sprite_run_4_left(void *mlx, char *path);
t_sprite	ft_new_sprite_platform(void *mlx, char *path);
t_sprite	ft_new_sprite_fall(void *mlx, char *path);
t_sprite	ft_new_sprite_item(void *mlx, char *path);
t_sprite	ft_new_sprite_ladder(void *mlx, char *path);
t_sprite	ft_new_sprite_exite_door(void *mlx, char *path);
t_sprite	ft_new_sprite_spike_trap(void *mlx, char *path);
t_sprite	ft_new_sprite_attack_1(void *mlx, char *path);
t_sprite	ft_new_sprite_attack_2(void *mlx, char *path);
int			ft_check_right(t_program *program);
int			ft_check_left(t_program *program);
int			ft_check_up(t_program *program);
int			ft_check_down(t_program *program);
int			ft_check_lower_right(t_program *program);
int			ft_check_lower_left(t_program *program);
int			ft_update(void *param);
int			ft_input(int key, void *param);
void		ft_attack_1(t_program *program);
void		ft_attack_2(t_program *program);
void		ft_iddle_1(t_program *program);
void		ft_iddle_2(t_program *program);
void		ft_iddle_3(t_program *program);
void		ft_iddle_4(t_program *program);
void		ft_iddle_5(t_program *program);
void		ft_iddle_6(t_program *program);
void		ft_iddle_7(t_program *program);
void		ft_iddle_8(t_program *program);
void		ft_map(t_program *program);
void		ft_exite_door(t_program *program);
void		ft_ladder(t_program *program);
void		ft_background(t_program *program);
void		ft_climb_1(t_program *program);
void		ft_climb_2(t_program *program);
void		ft_climb_3(t_program *program);
void		ft_climb_4(t_program *program);
void		ft_climb_5(t_program *program);
void		ft_climb_6(t_program *program);
void		ft_run_1_right(t_program *program);
void		ft_run_2_right(t_program *program);
void		ft_run_3_right(t_program *program);
void		ft_run_4_right(t_program *program);
void		ft_run_1_left(t_program *program);
void		ft_run_2_left(t_program *program);
void		ft_run_3_left(t_program *program);
void		ft_run_4_left(t_program *program);
void		ft_platform(t_program *program);
void		ft_fall(t_program *program);
void		ft_item(int i, t_program *program);
void		ft_spike_trap(t_program *program);
void		ft_iddle_animation(t_program *program);
void		ft_iddle_animation_1(t_program *program);
int			ft_animation_run(int frame, t_program *program);
void		ft_animation_run_right(int frame, t_program *program);
void		ft_animation_run_left(int frame, t_program *program);
void		ft_check_map_error_upper_wall(t_program *program);
void		ft_printf_count(t_program *program);
void		render_upper_map(int i, t_program *program);
void		render_middle_map(int i, t_program *program);
int			ft_animation_climb(int frame, t_program *program);
void		ft_animation_climb_1(int frame, t_program *program);
void		ft_attack_animation(t_program *program);
void		ft_check_map_square_error(t_program *program);
void		ft_check_map_error_left_wall(t_program	*program);
void		ft_check_map_error_right_wall(t_program	*program);

#endif
