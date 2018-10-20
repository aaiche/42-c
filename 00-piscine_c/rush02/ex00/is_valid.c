/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahayat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 16:16:37 by ahayat            #+#    #+#             */
/*   Updated: 2017/09/17 16:16:37 by ahayat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid(char c)
{
	if ((c == 'o') || (c == '-') || (c == '|') || (c == '/') || (c == '\\')
		|| (c == '*') || (c == 'A') || (c == 'B') || (c == 'C') || (c == ' '))
		return (1);
	else
		return (0);
}

int		to_project(char c1, char c2, char c3, int project)
{
	if (project == -1)
	{
		if (c1 == 'o')
			project = 0;
		else if (c1 == '/')
			project = 1;
		else if (c1 == 'A' && c2 == 'A')
			project = 2;
		else if ((c1 == 'A' && c2 == 'C')
			&& (c3 == 'A'))
			project = 3;
		else if ((c1 == 'A' && c2 == 'C')
			&& (c3 == 'C'))
			project = 4;
	}
	return (project);
}
