/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:59:37 by icunha-t          #+#    #+#             */
/*   Updated: 2024/10/22 17:59:38 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*
#include <bsd/string.h> 
//usar bsd/ para reconhecer o strlcpy original
//compilar com gcc -o myprogram myprogram.c -lbsd
#include <stdio.h>
int	main(void)
{
	char	src[] = "vamos testar";
	char	dst[] = "ola";
	int	rmine;
	int	rorig;
	rmine = ft_strlcpy(dst, src, 0);
	rorig = strlcpy(dst, src, 0);
	printf("%d\n", rorig);
	printf("%d\n", rmine);
	return (0);
}
*/
