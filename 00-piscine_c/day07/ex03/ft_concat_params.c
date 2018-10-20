/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 12:24:05 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/21 14:13:53 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		p++;
	}
	return (p - str);
}

static int		get_len_params(char **argv)
{
	int	len;
	int	i;

	i = 1;
	while (argv[i])
	{
		len = len + ft_strlen(argv[i]) + 1;
		i++;
	}
	return (len);
}

static int		concat_params(char **argv, char **pp_out)
{
	int		i;
	int		j;
	int		k;
	char	*p_out;

	p_out = *pp_out;
	i = 1;
	k = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			p_out[k] = argv[i][j];
			j++;
			k++;
		}
		p_out[k] = '\n';
		k++;
		i++;
	}
	p_out[k] = '\0';
	*pp_out = p_out;
	return (0);
}

char			*ft_concat_params(int argc, char **argv)
{
	char	*p_out;
	int		len;

	len = 0;
	if (argc > 1)
	{
		len = get_len_params(argv);
		p_out = (char *)malloc(len * sizeof(p_out));
		if (p_out == NULL)
			return (NULL);
		concat_params(argv, &p_out);
		p_out[ft_strlen(p_out) - 1] = '\0';
	}
	else
		return ("");
	return (p_out);
}
