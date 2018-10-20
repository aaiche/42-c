/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 15:38:42 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 17:49:06 by aaiche           ###   ########.fr       */
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

int				ft_str_is_lowercase(char *str)
{
	int		i;
	int		rc;

	rc = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_islower(str[i]))
		{
			rc = 0;
			break ;
		}
		i++;
	}
	return (rc);
}
