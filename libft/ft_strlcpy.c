/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:59:26 by jayoo             #+#    #+#             */
/*   Updated: 2021/05/13 13:46:40 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t cnt;

	if (dst == 0 || src == 0)
		return (0);
	cnt = ft_strlen(src);
	if (cnt < size)
		ft_memcpy(dst, src, cnt + 1);
	else if (size)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (cnt);
}
