/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/19 14:40:22 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/22 14:44:17 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	size_buf;

	len = ft_strlen(src);
	size_buf = size;
	if (size < 1 || src[size] != '\0')
	{
		while (size_buf--)
			dst[size_buf - 1] = src[size_buf - 1];
		dst[size] = '\0';
	}
	else
		return (0);
	return (len);
}
