/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverdonc <nverdonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:14:56 by nverdonc          #+#    #+#             */
/*   Updated: 2014/11/06 15:38:21 by nverdonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		b;

	i = 0;
	b = 0;
	while (s1[i])
		i++;
	while (s2[b])
	{
		s1[i] = s2[b];
		i++;
		b++;
	}
	s1[i] = '\0';
	return (s1);
}