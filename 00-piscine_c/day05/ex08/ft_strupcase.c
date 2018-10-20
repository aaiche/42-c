/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:37:38 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 17:47:56 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_islower(char c)
{
	int	rc;

	rc = 0;
	if (c >= 'a' && c <= 'z')
	{
		rc = 1;
	}
	else
	{
		rc = 0;
	}
	return (rc);
}

char			*ft_strupcase(char *str)
{
	int		i;
	char	upper_char;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_islower(str[i]))
		{
			upper_char = str[i] - 32;
			str[i] = upper_char;
		}
		i++;
	}
	return (str);
}
