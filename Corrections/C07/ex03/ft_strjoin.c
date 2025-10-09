/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:06:38 by moel-asr          #+#    #+#             */
/*   Updated: 2022/09/11 21:01:52 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

int	ft_len(char **str, int size, int len_sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(str[i]);
		len = len + len_sep;
		i++;
	}
	len = len - len_sep;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*j;

	if (size == 0)
		return (malloc(sizeof(char)));
	length = ft_len(strs, size, ft_strlen(sep));
	j = malloc((length + 1) * sizeof(char));
	if (j == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(j, strs[i]);
		j = j + ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(j, sep);
			j = j + ft_strlen(sep);
		}
		i++;
	}
	*j = '\0';
	return (j - length);
}
