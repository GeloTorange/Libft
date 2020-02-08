/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:10:27 by torange           #+#    #+#             */
/*   Updated: 2019/09/09 18:14:59 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*p_dst;
	const char	*p_src;

	if (len == 0 || src == dst)
		return (dst);
	else if (src > dst || (size_t)((char *)dst - (const char *)src) >= len)
		return (ft_memcpy(dst, src, len));
	else
	{
		p_dst = (char *)dst;
		p_src = (const char *)src;
		i = len;
		while (--i > 0)
			p_dst[i] = p_src[i];
		p_dst[0] = p_src[0];
		return (dst);
	}
}
