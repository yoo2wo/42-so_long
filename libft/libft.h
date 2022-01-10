/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:36:23 by jayoo             #+#    #+#             */
/*   Updated: 2022/01/10 20:38:48 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_line_length(int fd);
void	error_print(void);
int		ft_count_lines(int fd, int x, int img_w);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *str, size_t num);

#endif
