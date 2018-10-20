/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 15:16:38 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 17:48:19 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isalpha(char c)
{
	int	rc;

	rc = 0;
	if (((c >= 'a' && c <= 'z')) ||
		((c >= 'A' && c <= 'Z')))
	{
		rc = 1;
	}
	else
	{
		rc = 0;
	}
	return (rc);
}

int				ft_str_is_alpha(char *str)
{
	int		i;
	int		rc;

	rc = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isalpha(str[i]))
		{
			rc = 0;
			break ;
		}
		i++;
	}
	return (rc);
}
