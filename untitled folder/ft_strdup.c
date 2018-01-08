/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgladush <vgladush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 09:52:12 by vgladush          #+#    #+#             */
/*   Updated: 2018/01/02 17:08:41 by vgladush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	if (!s1 || !(s2 = (char *)malloc(i + 1)))
		return (0);
	s2[i] = '\0';
	while (i-- > 0)
		s2[i] = s1[i];
	return (s2);
}
