/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:00:59 by pbencze           #+#    #+#             */
/*   Updated: 2024/05/19 16:54:00 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	if (to_find[0] == '\0')
	{
		p = &str[i];
		return (p);
	}
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			p = &str[i];
			j = 0;
			while (str[i + j] == to_find[j] && str[i + j])
				j++;
			if (to_find[j] == '\0')
				return (p);
		}
		i++;
	}
	return (0);
}
