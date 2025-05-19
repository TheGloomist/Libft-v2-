/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/30 14:50:21 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/01 16:07:49 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalnum(int c)
{
	unsigned char	chr;

	chr = c;
	if (ft_isalpha(chr) || ft_isdigit(chr))
		return (1);
	return (0);
}
