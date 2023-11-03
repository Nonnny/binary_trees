#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: Always 0
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent && node->parent->parent)
	{
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
	}
	return (NULL);
}
