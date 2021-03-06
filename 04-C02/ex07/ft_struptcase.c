/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struptcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:36:46 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/15 18:43:33 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_struptcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += -32;
		++i;
	}
	return (str);
}
