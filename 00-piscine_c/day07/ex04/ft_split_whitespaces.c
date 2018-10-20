/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:43:53 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/20 18:55:39 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*store_word(char *w_start, int len, char **tab, int *p_j)
{
	int		i;
	int		j;
	char	*p_word;

	j = *p_j;
	p_word = (char *)malloc((len + 1) * sizeof(p_word));
	if (p_word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p_word[i] = w_start[i];
		i++;
	}
	p_word[i] = '\0';
	tab[j++] = p_word;
	*p_j = j;
	return (p_word);
}

int		ft_get_num_words(char *str)
{
	int		w_len;
	int		num_words;

	num_words = 0;
	w_len = 0;
	while (*str)
	{
		if (((*str == ' ') || (*str == '\t') || (*str == '\n')) && w_len == 0)
		{
		}
		if (((*str == ' ') || (*str == '\t') || (*str == '\n')) && w_len != 0)
		{
			num_words++;
			w_len = 0;
		}
		if ((*str != ' ') && (*str != '\t') && (*str != '\n'))
		{
			w_len++;
		}
		str++;
	}
	num_words++;
	return (num_words);
}

void	set_w_start(char *str, char **p_w_start, int *p_w_len)
{
	int		w_len;
	char	*w_start;

	w_len = *p_w_len;
	w_start = *p_w_start;
	if ((*str != ' ') && (*str != '\t') && (*str != '\n'))
	{
		if (!w_len)
			w_start = str;
		w_len++;
	}
	*p_w_len = w_len;
	*p_w_start = w_start;
	return ;
}

char	**ft_split_whitespaces(char *str)
{
	int		j;
	char	*w_start;
	int		w_len;
	char	**tab;

	tab = (char **)malloc((ft_get_num_words(str) + 1) * sizeof(tab));
	w_len = 0;
	j = 0;
	w_start = str;
	while (*str)
	{
		if (((*str == ' ') || (*str == '\t') || (*str == '\n')) && w_len != 0)
		{
			if (w_len)
				store_word(w_start, w_len, tab, &j);
			w_len = 0;
		}
		set_w_start(str, &w_start, &w_len);
		str++;
	}
	if (w_len)
		store_word(w_start, w_len, tab, &j);
	tab[j] = 0;
	return (tab);
}
