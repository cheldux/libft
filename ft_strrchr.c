/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thschnei <thschnei@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:54:06 by thschnei          #+#    #+#             */
/*   Updated: 2024/11/08 14:58:10 by thschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ret;

	while (*s)
	{
		if (*s == (char)c)
			ret = s;
		s++;
	}
	if (*ret == (char)c)
		return ((char *)ret);
	return (NULL);
}
