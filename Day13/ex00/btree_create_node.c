/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 23:25:28 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/14 23:28:39 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree*node;

	node = malloc(sizeof(t_btree));
	if (node)
	{
		node->item = item;
		node->right = NULL;
		node->left = NULL;
	}
	return (node);
}
