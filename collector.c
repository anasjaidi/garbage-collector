/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <ajaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:50:27 by anasjaidi         #+#    #+#             */
/*   Updated: 2022/06/23 18:44:16 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collector.h"

// start linked list methode

t_collector	*new_node(void *adr)
{
	t_collector	*node;

	node = malloc(sizeof(t_collector));
	if (!node)
		return (null);
	node->adr = adr;
	node->next = null;
	return (node);
}

t_collector	**append_adr(t_collector **root, void *adr)
{
	t_collector	*node;
	t_collector	*tmp;

	node = new_node(adr);
	if (!*root)
		return (*root = node, root);
	tmp = *root;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
	return (root);
}

void	*ft_col_malloc(t_collector **root, size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
		return (null);
	else
		return (append_adr(root, ptr), ptr);
}

void	ft_collect(t_collector **root, t_collector *node)
{
	if (!node)
		return ;
	ft_collect(root, node->next);
	free(node->adr);
	free(node);
}

// end linked list methode

// start array methode

int	lst_size(void **lst)
{
	int		i;

	i = 0;
	if (!lst)
		return (i);
	while (*lst && ++i)
		lst++;
	return (i);
}

void	**append_array(void **lst, void *adr)
{
	void	**new;
	int		size;
	int		i;

	size = lst_size(lst);
	i = -1;
	new = malloc((size + 2) * sizeof(void *));
	while (++i < size)
		new[i] = lst[i];
	new[size] = adr;
	new[size + 1] = null;
	lst_free(lst);
	return (new);
}
//end array methode
