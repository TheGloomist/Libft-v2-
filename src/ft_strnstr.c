/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/22 14:33:00 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/22 14:33:02 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t to_check;
	size_t	i;

	if (!little)
		return ((char *)big);
	to_check = 0;
	i = 0;
	while (big[to_check] && to_check < len)
	{
		while (big[to_check + i] == little[i] && little[i])
		{
			i++;
			if (i == ft_strlen(little)) 
				return ((char *)(big + to_check));
		}	
		to_check++;
		i = 0;
	}
	return (NULL);
}
