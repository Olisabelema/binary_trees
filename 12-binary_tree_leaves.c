#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the leaves
 *
 * Return: The number of leaves in the binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left, leaves_right;

	if (tree == NULL)
		return (0);

	/* Check if the current node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	
	/* Count the leaves in the left and right subtrees */
	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);
	
	/* Return the total number of leaves */
	return (leaves_left + leaves_right);
}
