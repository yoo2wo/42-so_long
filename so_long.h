/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:46:39 by jayoo             #+#    #+#             */
/*   Updated: 2022/01/12 00:23:53 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"

# define IMG_W 32
# define IMG_H 32
# define ESC 53

typedef struct s_img
{
	void	*player_up;
	void	*player_left;
	void	*player_right;
	void	*player_down;
	void	*background;
}	t_img;

typedef struct s_map
{
	char	**map;
	void	*object;
	int		x;
	int		y;
	int		diamonds;
}	t_map;

typedef struct s_data
{
	void	*mlx;
	void	*win;
	int		size_x;
	int		size_y;
	int		p_x;
	int		p_y;
	int		counter;
	int		collected;
	t_map	*map;
	t_img	*img;
}	t_data;


#endif
