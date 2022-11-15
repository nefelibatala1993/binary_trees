#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in
 * a binary tree
 * @tree: is a pointer to the root node of the tree to count the
 * number of nodes
 *
 * Return: On success, it returns the number of nodes. Otherwise,
 * it returns 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
