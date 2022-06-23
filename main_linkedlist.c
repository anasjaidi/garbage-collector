/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_linkedlist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <ajaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:58:49 by ajaidi            #+#    #+#             */
/*   Updated: 2022/06/23 19:21:19 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collector.h"


int main()
{
	t_collector	*root;
	char		*str;

	root = NULL;
	for (size_t i = 0; i < 100; i++)
		str = ft_col_malloc(&root, 10 * sizeof(char));
	ft_collect(&root, root);
	root = NULL;
}