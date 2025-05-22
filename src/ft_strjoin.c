/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/22 14:32:36 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/22 14:32:37 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;
	//size_t	i;
	// size_t	i2;

	if(!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s1, s1_len);
	//i = s1_len;
	ft_strlcpy(new_str + s1_len, s2, s2_len);
	// i2 = 0;
	// while (i < (s1_len + s2_len))
	// {
	// 	new_str[i] = s2[i2];
	// 	i++;
	// 	i2++;
	// }
	// new_str[i] = '\0';
	return (new_str);
}