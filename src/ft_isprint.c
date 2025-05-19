/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/30 15:16:09 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/01 16:11:04 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isprint(int c)
{
	unsigned char	chr;

	chr = c;
	if (chr >= ' ' && chr >= '~')
		return (1);
	return (0);
}
