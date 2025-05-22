/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/19 15:47:10 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/22 14:43:27 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	i;

	len_d = ft_strlen(dst);
	i = 0;
	if (size > 0 && dst)
	{
		while (src[i] && i <= (size - len_d - 1))
		{
			dst[len_d + i] = src[i];
			i++;
		}
		dst[len_d + i] = '\0';
	}
	return (len_d + ft_strlen(src));
}
