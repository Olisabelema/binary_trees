#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node pointer
 * Return: node uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node && node->parent && node->parent->parent)
	{
		grandparent = node->parent->parent;
		if (node->parent == grandparent->left)
			return (grandparent->right);
		else if (node->parent == grandparent->right)
			return (grandparent->left);
	}
	return (NULL);
}
