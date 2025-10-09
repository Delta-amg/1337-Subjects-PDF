/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:13:24 by moel-asr          #+#    #+#             */
/*   Updated: 2022/09/05 22:02:27 by moel-asr         ###   ########.fr       */
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
	j = argc - 1;
	if (argc > 1)
	{
		while (j > 0)
		{
			while (argv[j][i])
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			ft_putchar('\n');
			i = 0;
			j--;
		}
	}	
	return (0);
}
