/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 00:05:38 by jayoo             #+#    #+#             */
/*   Updated: 2022/01/12 00:36:25 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_map_error(char *str)
{
	printf("%s", str);
	exit(EXIT_FAILURE);
}

void	ft_check_content(t_data *data)
{
	int y;
	int exit;
	int player;

	exit = 0;
	player = 0;
	data->map->diamonds = 0;
	y = 0;
	while (data->map->map && data->map->map[y])
	{
		exit += ft_char_num(data->map->map[y], 'E');
		player += ft_char_num(data->map->map[y], 'P');
		data->map->diamonds += ft_char_num(data->map->map[y], 'C');
		y++;
	}
	if (exit == 0)
		ft_map_error("Error : least one exit\n");
	if (player != 1)
		ft_map_error("Error : only one player\n");
	if (data->map->diamonds == 0)
		ft_map_error("Error : least one diamon\nd");
}

void	ft_parse_input(t_data *data, char **argv, int argc)
{
	int		fd;
	int		i;
	int 	bytes;
	char 	buffer[2];

	ft_input_error(argc);
	i = 0;
	//bytes = 1;
	buffer[1] = 0;
	fd = open(argv[1], O_RDONLY);
	while (bytes == 1)
	{
		bytes = read(fd, buffer, 1);
		if (bytes != 1)
			break;
		if (buffer[0] != '\n' && buffer[0] != 0)
			data->map->map[i] = ft_strjoin(data->map->map[i], buffer);
		else
			i++;
	}
	ft_check_content(data);//
	ft_check_borders(data);//
}
