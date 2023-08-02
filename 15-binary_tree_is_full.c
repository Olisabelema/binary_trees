#include "binary_trees.h"

int check_down_tree(const binary_tree_t *tree);
/**
 * binary_tree_is_full - calculates if tree is full
 * @tree: root node of tree
 *
 * Return: 1 if full, 0 if not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_down_tree(tree));
}
/**
 * check_down_tree - check fullness recursively
 * @tree: tree
 *
 * Return: 0 if not full, 1 if full
 */
int check_down_tree(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			check_down_tree(tree->left) == 0 ||
			check_down_tree(tree->right) == 0)
			return (0);
	}
	return (1);
}
