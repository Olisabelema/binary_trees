#include "binary_trees.h"

/**
 * binary_tree_leaves - calculates leave no at each level
 * @root: pointer to the root node
 *
 * Return: Total no of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *root)
{
	size_t no_of_leaves = 0;

	if (root)
	{
		if (root->left == NULL && root->right == NULL)
			no_of_leaves = no_of_leaves + 1;
		else
			no_of_leaves = no_of_leaves + 0;

		no_of_leaves = no_of_leaves + binary_tree_leaves(root->left);
		no_of_leaves = no_of_leaves + binary_tree_leaves(root->right);
	}

	return (no_of_leaves);
}
