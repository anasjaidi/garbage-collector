/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_aray.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <ajaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:14:38 by ajaidi            #+#    #+#             */
/*   Updated: 2022/06/23 19:21:19 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collector.h"

int main()
{
	void	**adrs;
	char	*str;
	
	adrs = NULL;
	for (size_t i = 0; i < 10000; i++)
		str = ft_malloc_array(&adrs, 3 * sizeof(char));
	lst_free(adrs);
	adrs = NULL;
}