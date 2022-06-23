/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <ajaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:01:30 by ajaidi            #+#    #+#             */
/*   Updated: 2022/06/23 18:16:51 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLECTOR_H
# define COLLECTOR_H

// start including libs

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# define null NULL

// end including 

// start linked list methode
typedef struct collector
{
	void				*adr;
	struct collector	*next;
}	t_collector;

t_collector	*new_node(void *adr);
t_collector	**append_adr(t_collector **root, void *adr);
void		*ft_col_malloc(t_collector **root, size_t size);
void		ft_collect(t_collector **root, t_collector *node);

// end linked list methode

// strat array methode

int	lst_size(void **lst);

// end array methode

#endif