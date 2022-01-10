/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:02:10 by jayoo             #+#    #+#             */
/*   Updated: 2022/01/10 20:39:50 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char *argv[])
{
	t_data	data;
	t_map	map;

	ft_window_size(&data, argv);
	map.map = ft_calloc(data.size_y, sizeof(char *)); //y크기만큼 먼저 동적할당
	if (!map.map)
	{
		perror("Error : malloc error\n");
		exit(1);
	}
	ft_init(&data, &map);

}
