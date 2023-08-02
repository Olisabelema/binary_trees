#include "binary_trees.h"

int tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - calculates balance factor
 * @tree: root node
 *
 * Return: balance factor (int)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (tree_height(tree->left) - tree_height(tree->right));

	return (0);
}

/**
 * tree_height - measures the height of a binary tree
 * @tree: tree to measure
 * Return: height
 */
int tree_height(const binary_tree_t *tree)
{

	if (tree)
	{
		int left = 0, right = 0;

		left = tree->left ? 1 + tree_height(tree->left) : 1;
		right = tree->right ? 1 + tree_height(tree->right) : 1;
		return (left > right ? left : right);
	}
	return (0);
}
