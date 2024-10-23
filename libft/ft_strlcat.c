/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:58:52 by icunha-t          #+#    #+#             */
/*   Updated: 2024/10/23 13:58:53 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	if (size <= dst_len)
		return (size + src_len);
	i = dst_len;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/*
#include <bsd/string.h> 
//usar bsd/ para reconhecer o strlcpy original
//compilar com gcc -o myprogram myprogram.c -lbsd
#include <stdio.h>
int	main(void)
{
	char	src[] = "vamos testar.";
	char	dst[] = "Ola, ";
	printf ("%d\n", ft_strlcat(dst, src, 2));
	printf ("%ld\n", strlcat(dst, src, 2));
	return (0);
}
*/
