/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thschnei <thschnei@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:05:02 by thschnei          #+#    #+#             */
/*   Updated: 2024/11/08 15:08:16 by thschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (s1[cnt] && s2[cnt] && s1[cnt] == s2[cnt] && cnt < n)
		cnt++;
	return (s1[cnt] - s2[cnt]);
}
