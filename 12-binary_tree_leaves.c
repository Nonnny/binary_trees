#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves (terminal nodes) in a binary tree
 * @tree: points to the root node
 * Return: Always 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
