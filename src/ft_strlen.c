/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/30 15:21:36 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/01 17:42:14 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	const char	*s= "";
	
	printf("%li\n", ft_strlen(s));
	return(0);
}