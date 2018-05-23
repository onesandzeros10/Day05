/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 23:25:20 by dahernan          #+#    #+#             */
/*   Updated: 2018/05/22 23:34:18 by dahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int c;

	c = 0;
	while (src[c] > 0 && c < (int)n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < (int)n)
	{
		dest[c] = '0';
		c++;
	}
	return (dest);
}
