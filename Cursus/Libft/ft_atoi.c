/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:07:15 by ayfadili          #+#    #+#             */
/*   Updated: 2024/01/10 12:23:21 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (' ' == c || '\f' == c || '\n' == c
		|| '\r' == c || '\t' == c || '\v' == c);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	result;
	int		sign;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if ('+' == str[i] || '-' == str[i])
		if ('-' == str[i++])
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i++] - '0';
		if (result > (size_t)9223372036854775807 + (sign == -1))
		{
			result = (0 - !(sign == -1));
			break ;
		}
	}
	return ((int )(sign * result));
}
