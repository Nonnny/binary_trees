#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func:  pointer to a function to call for each node
 * Return: 1 else 0
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
