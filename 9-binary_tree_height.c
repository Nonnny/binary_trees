#include "binary_trees.h"
#include <stdlib.h>

/**
 * size_t binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: Always 0
 */
size_t max_size_t(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node from which to measure, starting at 0
 * Return: levels from root, or 0 if `tree` is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (1 + max_size_t(binary_tree_height(tree->left),
			       binary_tree_height(tree->right)));
}
