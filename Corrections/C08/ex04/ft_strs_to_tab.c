/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 04:30:26 by moel-asr          #+#    #+#             */
/*   Updated: 2022/09/13 21:37:59 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strdup(char *src)
{
	int		i;
	char	*c;

	i = 0;
	while (src[i])
		i++;
	c = malloc((sizeof(char) * i) + 1);
	i = 0;
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*o;
	int			i;

	i = 0;
	o = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!o)
		return (NULL);
	while (i < ac)
	{
		o[i].size = ft_strlen(av[i]);
		o[i].str = av[i];
		o[i].copy = ft_strdup(av[i]);
		i++;
	}
	o[i].str = 0;
	return (o);
}
