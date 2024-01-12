/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:17:45 by ayfadili          #+#    #+#             */
/*   Updated: 2024/01/10 11:18:42 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t x, size_t y)
{
	if (x < y)
		return (x);
	return (y);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t			slen;
	char			*dst;
	unsigned int	i;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start > slen || !len)
		return (ft_strdup(""));
	dst = (char *)malloc((min(slen - start, len) + 1) * sizeof(char));
	if (!dst)
		return (0);
	i = 0;
	while (s[start] && i < len)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}
