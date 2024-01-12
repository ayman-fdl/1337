/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:01:08 by ayfadili          #+#    #+#             */
/*   Updated: 2024/01/10 11:01:24 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		if (str[i++] == (unsigned char)c)
			return ((char *)&str[i - 1]);
	if ((char )c == 0)
		return ((char *)&str[i]);
	return (0);
}
