/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:37:38 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/20 10:04:25 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isupper(char c)
{
	int	rc;

	rc = 0;
	if (c >= 'A' && c <= 'Z')
	{
		rc = 1;
	}
	else
	{
		rc = 0;
	}
	return (rc);
}

char			*ft_strlowcase(char *str)
{
	int		i;
	char	lower_char;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isupper(str[i]))
		{
			lower_char = str[i] + 32;
			str[i] = lower_char;
		}
		i++;
	}
	return (str);
}
