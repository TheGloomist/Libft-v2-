/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/19 14:24:24 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/22 14:39:51 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	// char	*temp;
	
	if (!dest && !src)
		return (NULL);
	// ft_memcpy(temp, src, n);
	ft_memcpy(dest, src, n);
	return (dest);
}
// TODO: fix dis