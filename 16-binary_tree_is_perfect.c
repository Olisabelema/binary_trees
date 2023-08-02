#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 0 (not full) 1 (full)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_nodes, right_nodes;

	left_nodes = right_nodes = 0;

	if (tree == NULL)
		return (0);

	/**
	 * This recursively counts the number of nodes in the left
	 * and right subtrees of the current node
	 */
	left_nodes = binary_tree_is_full(tree->left);
	right_nodes = binary_tree_is_full(tree->right);

	/* Return the sum of the left, right and the current node */
	return (left_nodes + 1 + right_nodes);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 0 (not perfect) 1 (perfect)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_nodes, right_nodes;

	left_nodes = right_nodes = 0;

	if (tree == NULL)
		return (0);

	/* Count all nodes on both sides of the tree */
	left_nodes = binary_tree_is_full(tree->left);
	right_nodes = binary_tree_is_full(tree->right);

	/* If the number of nodes on both sides are the same, the tree is perfect */
	if (left_nodes == right_nodes)
		return (1);

	return (0);
}
