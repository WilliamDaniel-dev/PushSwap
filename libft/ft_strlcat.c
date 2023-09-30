/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 03:46:17 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/02/03 14:21:40 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function takes two strings "A" and "B"
concatenates them, ensuring the both end in NULL.*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	i;

	i = 0;
	s = ft_strlen(src);
	d = ft_strlen(dst);
	if (size <= d)
		return (size + s);
	while ((i + d) < (size - 1) && src[i])
	{
		dst[d + i] = src[i];
		i++;
	}
		dst[d + i] = '\0';
	return (d + s);
}

/*int main ()
{
	char	org[5] = "mento";
	char	dest[4] = "casa";
	size_t	number;

	number = 0;

	printf("Juntos são: %zu\n", ft_strlcat(org, dest, number));
	return (0);
}*/