/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:51:06 by caidel            #+#    #+#             */
/*   Updated: 2020/07/23 15:45:43 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*scat;
	int		i;
	int		t;

	t = 0;
	i = 0;
	while (i < size)
	{
		t += ft_strlen(strs[i++]);
	}
	i -= 1;
	t += ft_strlen(sep) * i;
	if (size <= 0)
		t = 1;
	if (!(scat = (char*)malloc(t * sizeof(*scat))))
		return (0);
	scat[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(scat, strs[i++]);
		if (i < size)
			ft_strcat(scat, sep);
	}
	return (scat);
}
