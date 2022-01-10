/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:41:55 by jayoo             #+#    #+#             */
/*   Updated: 2022/01/10 20:32:52 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	error_print(void)
{
	exit(1);
	printf("Error : invalid map dimension\n");
}

int	ft_count_lines(int fd, int x, int img_w)
{
	char	buffer[1];
	int		line;
	int		bytes;
	int		i;

	i = 0;
	buffer[0] = '\0';
	line = 1;
	bytes = 1;
	while (bytes == 1)
	{
		bytes = read(fd, buffer, 1);
		if (bytes != 1 && i != (x / img_w))
			error_print();
		if (i == (x / img_w))
		{
			line++;
			i = 0;
		}
		else
			i++;
	}
	return (line);
}
