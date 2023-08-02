#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least one child
 * in a binary tree
 * @tree: A pointer to the root node of the tree to count the nodes
 *
 * Return: The number of nodes with at least one child in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes_left, nodes_right;

    if (tree == NULL)
        return (0);

    /* Check if the current node has at least one child */
    if (tree->left != NULL || tree->right != NULL)
    {
        /* Count the nodes in the left and right subtrees */
        nodes_left = binary_tree_nodes(tree->left);
        nodes_right = binary_tree_nodes(tree->right);

        /* Return the total number of nodes with at least one child */
        return (nodes_left + nodes_right + 1);
    }

    /* If the current node has no children, return 0 */
    return (0);
}

