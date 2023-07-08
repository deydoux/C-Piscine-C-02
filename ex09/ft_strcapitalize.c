/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:45:03 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/08 11:37:12 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_in_range(int a, int b, char c)
{
	return (a <= c && c <= b);
}

int	char_is_lowercase(char c)
{
	return (char_in_range('a', 'z', c));
}

int	char_is_numeric(char c)
{
	return (char_in_range('0', '9', c));
}

int	is_alphanumeric(char c)
{
	return (char_in_range('A', 'Z', c)
		|| char_is_lowercase(c)
		|| char_is_numeric(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalized;
	int	c;

	i = 0;
	capitalized = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (is_alphanumeric(c))
		{
			if (!char_is_numeric(c))
			{
				if (!char_is_lowercase(c) && capitalized)
					str[i] += 32;
				else if (char_is_lowercase(c) && !capitalized)
					str[i] -= 32;
			}
			capitalized = 1;
		}
		else
			capitalized = 0;
		i++;
	}
	return (str);
}
