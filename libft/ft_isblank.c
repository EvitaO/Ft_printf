/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isblank.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eovertoo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/06 15:08:48 by eovertoo      #+#    #+#                 */
/*   Updated: 2019/04/06 15:12:27 by eovertoo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_isblank(int c)
{
	if (c == 32 || c == 9)
		return (1);
	return (0);
}