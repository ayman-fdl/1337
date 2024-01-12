/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:15:45 by ayfadili          #+#    #+#             */
/*   Updated: 2024/01/10 11:19:03 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	size_t	i;
	char	*dst;

	size = ft_strlen(str);
	dst = malloc ((size + 1) * sizeof(char));
	if (!dst)
		return (0);
	i = -1;
	while (++i <= size)
		dst[i] = str[i];
	return (dst);
}
