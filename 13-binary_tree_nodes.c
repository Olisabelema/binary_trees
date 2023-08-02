#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates no of nodes in binary tree
 * @tree: root node
 *
 * Return: no of nodes in tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no_of_nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			no_of_nodes = no_of_nodes + 1;
		else
			no_of_nodes = no_of_nodes + 0;

		no_of_nodes = no_of_nodes + binary_tree_nodes(tree->left);
		no_of_nodes = no_of_nodes + binary_tree_nodes(tree->right);
	}

	return (no_of_nodes);
}
