/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 23:34:04 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/14 23:34:19 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_apply_infix(t_btree *root, void (*applyf)(void*))
{
	if (root != NULL)
	{
		if (root->left)
			btree_apply_infix(root->left, applyf);
		(*applyf)(root);
		if (root->right)
			btree_apply_infix(root->right, applyf);
	}
}
