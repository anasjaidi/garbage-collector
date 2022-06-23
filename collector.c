/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <ajaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:50:27 by anasjaidi         #+#    #+#             */
/*   Updated: 2022/06/23 18:52:42 by ajaidi           ###   ########.fr       */
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

void	lst_free(void ***lst)
{
	int	size;
	int	i;

	size = lst_size(lst);
	i = -1;
	while (++i <= size)
		free(lst[i]);
	free(lst);
}

void	append_array(void ***list, void *adr)
{
	void	**new;
	void	**lst;
	int		size;
	int		i;

	lst = *lst;
	size = lst_size(lst);
	i = -1;
	new = malloc((size + 2) * sizeof(void *));
	while (++i < size)
		new[i] = lst[i];
	new[size] = adr;
	new[size + 1] = null;
	lst_free(lst);
	*list = new;
}

void	*ft_malloc_array(void	***lst, size_t size)
{
	void	*ret;

	ret = malloc(size);
	if (!ret)
		return (null);
	else
		return (append_array(lst, ret), ret);
}
//end array methode
