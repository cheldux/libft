/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thschnei <thschnei@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:02:17 by thschnei          #+#    #+#             */
/*   Updated: 2024/11/08 16:12:12 by thschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cnt;
	unsigned char	*cs1;
	unsigned char	*cs2;

	cnt = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (cs1[cnt] == cs2[cnt] && cnt < n)
		cnt++;
	return (cs1[cnt] - cs2[cnt]);
}
