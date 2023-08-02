#include "binary_trees.h"
int is_leaf(const binary_tree_t *node);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int check_down_tree(const binary_tree_t *tree,
					size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * depth - calculate depth of node in a tree
 * @tree: pointer to root node
 *
 * Return: node depth
 */
size_t depth(const binary_tree_t *tree)
{
	if (tree->parent != NULL)
		return (1 + depth(tree->parent));
	return (0);
}
/**
 * is_leaf - check if a node is a leaf node
 * @node: node to check
 *
 * Return: 1 if a leaf node, otherwise 0
 */
int is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
/**
 * get_leaf - return a tree leaf
 * @tree: pointer to root node
 *
 * Return: pointer to first leaf met
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	if (tree->left)
		return (get_leaf(tree->left));
	else
		return (get_leaf(tree->right));
}

/**
 * check_down_tree - recursively check
 * @tree: root node pointer
 * @leaf_depth: depth of leaf in tree
 * @level: current node level
 *
 * Return: 1 if perfect, 0 if not
 */
int check_down_tree(const binary_tree_t *tree, size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
	{
		if (leaf_depth == level)
			return (1);
		return (0);
	}
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (check_down_tree(tree->left, leaf_depth, level + 1) &&
			check_down_tree(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - check that
 * @tree: root node
 *
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_down_tree(tree, depth(get_leaf(tree)), 0));
}
