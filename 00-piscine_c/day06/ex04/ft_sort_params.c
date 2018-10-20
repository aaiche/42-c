/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:20:57 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/20 13:39:25 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	diff;

	diff = 0;
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		diff = (unsigned char)*s1 - (unsigned char)*s2;
		if (diff != 0)
			return (diff);
		else
		{
			if (*s1)
				s1++;
			if (*s2)
				s2++;
		}
	}
	if (((*s1 != '\0') && (*s2 == '\0')) || ((*s1 == '\0') && (*s2 != '\0')))
	{
		diff = (unsigned char)*s1 - (unsigned char)*s2;
		return (diff);
	}
	return (diff);
}

void	ft_sort_words_array(int num_words, char **tab)
{
	int		i;
	int		j;
	int		diff;
	char	*p;

	i = 1;
	while (i < num_words)
	{
		j = 1;
		while (j < num_words - i)
		{
			diff = ft_strcmp(tab[j], tab[j + 1]);
			if (diff > 0)
			{
				p = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = p;
			}
			j++;
		}
		i++;
	}
	return ;
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		ft_sort_words_array(argc, argv);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
