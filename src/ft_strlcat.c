/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/19 15:47:10 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/19 18:17:55 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;
	// size_t	to_cat;
	
	len_d = ft_strlen(dst);
	i = 0;
	// to_cat = size - len_d - 1;
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
// else if (len_s < to_cat)
	// {
	// 	while(len_s--)
	// 		dst[len_d + len_s - 1] = src[len_s - 1];
	// 	len_s = ft_strlen(src);
	// 	dst[len_d + len_s] = '\0';
	// }