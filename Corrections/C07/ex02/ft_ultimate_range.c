/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:41:08 by moel-asr          #+#    #+#             */
/*   Updated: 2022/09/11 21:25:09 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_size(int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	while (min < max)
	{
		min++;
		i++;
	}
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	l;
	int	*a;

	i = 0;
	l = ft_size(min, max);
	if (l == 0)
	{
		*range = 0;
		return (0);
	}
	a = malloc(sizeof(int) * l);
	if (a == 0)
		return (-1);
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	*range = a;
	return (l);
}
