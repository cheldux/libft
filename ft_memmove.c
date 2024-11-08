/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thschnei <thschnei@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:06:06 by thschnei          #+#    #+#             */
/*   Updated: 2024/11/07 14:44:39 by thschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptr1;
	const char	*ptr2;

	ptr1 = dest;
	ptr2 = src;
	if (ptr1 == ptr2)
		return (dest);
	if (ptr1 < ptr2)
	{
		while (n)
		{
			*ptr1++ = *ptr2++;
			n--;
		}
	}
	else
	{
		while (n)
		{
			ptr1[n-1] = ptr2[n-1];
			n--;
		}
	}
	return (dest);
}
