/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:11:58 by icunha-t          #+#    #+#             */
/*   Updated: 2024/10/22 17:20:10 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tempd;
	unsigned const char	*temps;

	i = 0;
	tempd = dest;
	temps = src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		tempd[i] = temps[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	src[] = "vamos testar";
	char	dest[50];
	printf ("%s\n", (char *)ft_memcpy(dest, src, 5));
	printf ("%s\n", (char *)memcpy(dest, src, 5));
	return (0);
}
*/
