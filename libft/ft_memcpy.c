/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:09:34 by jayoo             #+#    #+#             */
/*   Updated: 2021/05/09 16:29:50 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	const void	*dstp = dst;

	if (!dst && !src)
		return (NULL);
	while (num--)
		*((unsigned char *)dstp++) = *((unsigned char *)src++);
	return (dst);
}
