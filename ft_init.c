/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:43:47 by jayoo             #+#    #+#             */
/*   Updated: 2022/01/12 00:04:38 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void ft_init_help(t_data *data)
{
	char	*path;
	int		img_width;
	int		img_height;

	path = "textures/ACharRight.xpm";
	data->img->player_up = mlx_xpm_file_to_image(data->mlx, path, &img_width, &img_height);
	path = "textures/green.xpm";
	data->img->player_up = mlx_xpm_file_to_image(data->mlx, path, &img_width, &img_height);
}

void	ft_init(t_data *data, t_map *map)
{
	char	*path;
	int		img_width;
	int		img_height;
	t_img	*img;

	data->map = map;
	img = malloc(sizeof(t_img));
	if (!img)
	{
		perror("Error : malloc error\n");
		exit(1);
	}
	data->img = img;
	path = "textures/ACharUp.xpm";
	data->img->player_up = mlx_xpm_file_to_image(data->mlx, path, &img_width, &img_height);
	path = "textures/ACharLeft.xpm";
	data->img->player_up = mlx_xpm_file_to_image(data->mlx, path, &img_width, &img_height);
	path = "textures/ACharDown.xpm";
	data->img->player_up = mlx_xpm_file_to_image(data->mlx, path, &img_width, &img_height);
	ft_init_help(data);
	data->counter = 0; //무엇을 의미
	data->collected = 0; //
}
