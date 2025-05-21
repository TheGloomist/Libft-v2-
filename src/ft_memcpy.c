/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/08 16:49:51 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/21 00:45:17 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (NULL);
	
	while (n--)
		((char *)dest)[n - 1] = ((char *)src)[n - 1];
	return (dest);
}
