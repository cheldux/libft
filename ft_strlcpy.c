/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thschnei <thschnei@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:45:42 by thschnei          #+#    #+#             */
/*   Updated: 2024/11/08 13:18:12 by thschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cnt;

	cnt = 0;
	while (*src && cnt < size - 1)
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
