/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:23:03 by moel-asr          #+#    #+#             */
/*   Updated: 2022/08/29 23:25:08 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	up;

	i = 0;
	ft_strlowcase(str);
	up = 1;
	while (str[i] != '\0')
	{
		if (ft_char_is_lowercase(str[i]))
		{
			if (up == 1)
			{
				str[i] = str[i] - 32;
				up = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			up = 0;
		else
			up = 1;
		i++;
	}
	return (str);
}
