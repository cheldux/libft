/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thschnei <thschnei@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:18:37 by thschnei          #+#    #+#             */
/*   Updated: 2024/11/08 15:00:39 by thschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	cnt;

	cnt = 0;
	while (*dst)
	{
		dst++;
		if (cnt < (int)size)
			cnt++;
	}
	while (*src && cnt < (int)size - 1)
	{
		*dst++ = *src++;
		cnt++;
	}
	*dst = 0;
	while (*src)
	{
		src++;
		cnt++;
	}
	return (cnt);
}
