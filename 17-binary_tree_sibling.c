#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node pointer
 * Return: node sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node == node->parent->left)
			return (node->parent->right);
		else if (node == node->parent->right)
			return (node->parent->left);
	}
	return (NULL);
}
