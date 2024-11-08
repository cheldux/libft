/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thschnei <thschnei@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:09:02 by thschnei          #+#    #+#             */
/*   Updated: 2024/11/08 15:54:28 by thschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*ptr;

	cnt = 0;
	ptr = (unsigned char *)s;
	while (cnt < n && ptr[cnt] != (unsigned char)c)
		cnt++;
	if (ptr[cnt] == (unsigned char)c)
		return (ptr + cnt);
	return (NULL);
}
