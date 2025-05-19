/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/30 14:46:41 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/01 16:10:03 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isdigit(int c)
{
	unsigned char	num;

	num = c;
	if (num >= '0' && num <= '9')
		return (1);
	return (0);
}
