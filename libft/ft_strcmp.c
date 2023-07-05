/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:22:54 by fakman            #+#    #+#             */
/*   Updated: 2023/03/19 08:22:55 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2)
{
	size_t	counter;
    size_t	n;

	n = ft_strlen(s1);
	if (ft_strlen(s2) > ft_strlen(s1))
		n = ft_strlen(s2);
	if (n == 0)
		return (0);
	counter = 0;
	while (counter < (n - 1))
	{
		if (s1[counter] != s2[counter])
			break ;
		counter++;
	}
	return (((unsigned char *)s1)[counter] - ((unsigned char *)s2)[counter]);
}
