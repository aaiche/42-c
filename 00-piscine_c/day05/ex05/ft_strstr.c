/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 17:01:49 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/20 12:55:59 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i + j] == to_find[j] || !to_find[j])
		{
			if (!to_find[j])
				return (str + i);
			else if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
