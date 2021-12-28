/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:02:10 by jayoo             #+#    #+#             */
/*   Updated: 2021/12/28 17:53:11 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>

#define X_EVENT_KEY_PRESS 2
#define X_EVENT_KEY_RELEASE 3

#define KEY_W 13
#define KEY_A 0
#define KEY_S 1
#define KEY_D 2
#define KEY_ESC 53

typedef struct s_param
{
	int x;
	int y;
} t_param;

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

void my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char *dst;

	printf("%d\n", data->bits_per_pixel);
	dst = data->addr + (y * data->line_length + x *(data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void param_init (t_param *param)
{
	param->x = 0;
	param->y = 0;
}

int key_press(int keycode, t_param *param)
{
	if (keycode == KEY_W)
		param->y--;
	else if (keycode == KEY_S)
		param->y++;
	else if (keycode == KEY_A)
		param->x--;
	else if (keycode == KEY_D)
		param->x++;
	else if (keycode == KEY_ESC)
		exit(0);//exit이 정상적인 종료인가?
	printf("(x, y) : (%d, %d)\n", param->x, param->y);
	return (0);
}

int main ()
{
	void *mlx;
	void *win;
	t_param param;
	t_data img;

	mlx = mlx_init();
	param_init(&param);
	win = mlx_new_window(mlx, 300, 300, "42");
	img.img = mlx_new_image(mlx, 1920, 1080);//
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);//

	mlx_hook(win, X_EVENT_KEY_PRESS, 0, key_press, &param); //key_press 인가 &key_press 인가
	my_mlx_pixel_put(&img, 5,5, 0x00FF0000);//
	mlx_put_image_to_window(mlx, win, img.img, 0, 0);//
	mlx_loop(mlx);
}
