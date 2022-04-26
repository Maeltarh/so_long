/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:55:14 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/13 11:28:45 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_print
{
	va_list	args;
	int		counter;
}	t_print;

void	ischar(t_print *arg_count);
void	isstr(t_print *arg_count);
void	isptr(t_print *arg_count);
void	ishexa(t_print *arg_count, char c);
void	isint(t_print *arg_count);
void	isunsignedint(t_print *arg_count);
int		ft_printf(const char *str, ...);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
char	*ft_itoa(int n);
#endif
