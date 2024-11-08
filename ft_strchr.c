/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thschnei <thschnei@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:29:57 by thschnei          #+#    #+#             */
/*   Updated: 2024/11/08 14:53:28 by thschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ret;

	ret = s;
	while (*ret && *ret != (char)c)
		ret++;
	if (*ret == (char)c)
		return ((char *)ret);
	return (NULL);
}
