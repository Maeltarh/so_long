NAME = game.out
SRCS = main.c
OBJ = $(SRCS:.c=.o)

FT_HOOKS = ./ft_hooks/check_sideways.c ./ft_hooks/ft_printf_count.c ./ft_hooks/hooks_keyboard.c ./ft_hooks/move_sideways.c \
			./ft_hooks/move_up_down.c

FT_MAPS = ./ft_maps/read_map.c ./ft_maps/render_map.c ./ft_maps/error_map.c ./ft_maps/error_map_2.c ./ft_maps/window.c

FT_SPRITES = ./ft_sprites/new_sprites_map_1.c ./ft_sprites/new_sprites_map_2.c \
			./ft_sprites/new_sprites_run_right.c ./ft_sprites/new_sprites_run_left.c \
			./ft_sprites/render_sprites_map_1.c ./ft_sprites/render_sprites_map_2.c \
			./ft_sprites/render_sprites_run_right.c ./ft_sprites/render_sprites_run_left.c \
			./ft_sprites/render_sprites_iddle_1.c ./ft_sprites/render_sprites_iddle_2.c \
			./ft_sprites/new_sprites_iddle_1.c ./ft_sprites/new_sprites_iddle_2.c \
			./ft_sprites/new_sprites_climb_1.c ./ft_sprites/new_sprites_climb_2.c \
			./ft_sprites/render_sprites_climb_1.c ./ft_sprites/render_sprites_climb_2.c

FT_PRINTF = ./ft_printf/ft_itoa.c ./ft_printf/ft_printf.c ./ft_printf/ft_ptrcharstrhexa.c ./ft_printf/ft_putchar_fd.c \
			./ft_printf/ft_putstr_fd.c ./ft_printf/ft_strlen.c ./ft_printf/ft_unsignedorint.c

FLAGS = -Wall -Wextra -Werror -I /usr/local/include

LINKS = -L /usr/local/lib -lmlx -framework OpenGl -framework Appkit

all: $(NAME)

$(NAME): $(OBJ)
		@gcc $(FLAGS) $(OBJ) $(FT_HOOKS) $(FT_SPRITES) $(FT_MAPS) $(FT_PRINTF) $(LINKS) -o $(NAME)
		@rm $(OBJ)

$(OBJ): $(SRCS)
		@gcc $(FLAGS) -c $(SRCS)

exe: all
		@./$(NAME) $(ARGS)

clean:
		rm -f $(NAME) $(OBJS)

fclean:
		rm -f $(NAME) $(OBJS)

re: fclean all
