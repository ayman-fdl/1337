/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:14:05 by ayfadili          #+#    #+#             */
/*   Updated: 2024/01/10 11:14:38 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*addr;
	size_t	s;

	s = nmemb * size;
	if (size && s / size != nmemb)
		return (NULL);
	addr = malloc(nmemb * size);
	if (!addr)
		return (NULL);
	ft_bzero(addr, nmemb * size);
	return (addr);
}
