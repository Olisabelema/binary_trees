#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: The size of a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right, size;

	size_left = size_right = 0;

	if (tree == NULL)
		return (0);

	/* Determine the size of left and right subtrees */
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	/* Return the size of the tree including the root node */
	size = size_left + size_right + 1;

	return (size);
}
