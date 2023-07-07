/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:45:03 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/07 14:03:56 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_range(int a, int b, int c)
{
	return (a <= c && c <= b);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_range('A', 'Z', str[i]) || check_range('a', 'z', str[i])))
			return (0);
		i++;
	}
	return (1);
}
