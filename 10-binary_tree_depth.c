#include "binary_trees.h"
/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: tree to measure
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree)
	{
		size_t i = 0;

		i = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
		return (i);
	}
	return (0);
}
