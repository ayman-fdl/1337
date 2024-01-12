/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:14:48 by ayfadili          #+#    #+#             */
/*   Updated: 2024/01/10 10:45:13 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memrcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	while (i)
	{
		i--;
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src)
		return (dest);
	if (src <= dest)
		ft_memrcpy(dest, src, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
