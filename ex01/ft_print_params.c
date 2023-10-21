/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:52:56 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/17 12:57:36 by ddogan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	i = 1;
	while (i < argc)
	{
		a = 0;
		while (argv[i][a])
		{
			write(1, &argv[i][a], 1);
			a++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
