/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:18:59 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/24 21:19:02 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2 && *s1 != '*')
		return (match((s1 + 1), (s2 + 1)));
	else if (*s1 == '*' && *s2 == '*')
		return (match((s1 + 1), s2));
	else if (*s2 == '*' && !*s1)
		return (match(s1, (s2 + 1)));
	else if (*s2 == '*' && *s2 && *s1)
		return (match((s1 + 1), s2)) || (match(s1, (s2 + 1)));
	else
		return (0);
}