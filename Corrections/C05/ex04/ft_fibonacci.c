/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:55:42 by moel-asr          #+#    #+#             */
/*   Updated: 2022/09/05 23:52:04 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	x;

	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	x = (ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2));
	return (x);
}
