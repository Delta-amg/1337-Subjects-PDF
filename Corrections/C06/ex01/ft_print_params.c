/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:16:00 by moel-asr          #+#    #+#             */
/*   Updated: 2022/09/13 15:34:28 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc > 1)
	{
		while (argv[j])
		{
			while (argv[j][i])
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			ft_putchar('\n');
			i = 0;
			j++;
		}
	}
	return (0);
}
