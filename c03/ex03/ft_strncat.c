/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:42:20 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/02 13:50:37 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char dest[30] = "String1";
	char dest2[30] = "String1";
	char src[8] = "String2";
	const char src2[8] = "String2";
	printf("%s\n", ft_strncat(dest, src, 10));
	printf("%s", strncat(dest2, src2, 10));
	return (0);
}
*/
