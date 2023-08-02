#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree)
	{
		i += (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
		return (i);
	}
	return (0);
}
