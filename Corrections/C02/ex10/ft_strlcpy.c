/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:44:14 by moel-asr          #+#    #+#             */
/*   Updated: 2022/08/31 20:47:53 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
		j++;
	}
	if (size == 0)
		return (i);
	j = 0;
	while (src[j] != '\0' && j < (size - 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
