/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:06:30 by ayfadili          #+#    #+#             */
/*   Updated: 2024/01/10 11:06:57 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;

	if (!small[0])
		return ((char *)big);
	if (!n)
		return (0);
	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while (small[j] && big[i + j] && j < n - i && big[i + j] == small[j])
			j++;
		if (!small[j])
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
