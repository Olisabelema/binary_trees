#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: A pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node, or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *parent_node;

    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* Get the parent node of the current node */
    parent_node = node->parent;

    /* Check if both left and right children of the parent are present */
    if (parent_node->right && parent_node->left)
    {
        /* If the current node is the left child, return the right sibling */
        if (parent_node->left == node)
            return (parent_node->right);
        /* Otherwise, return the left sibling */
        else
            return (parent_node->left);
    }

    /* If either left or right child is missing, there is no sibling */
    return (NULL);
}

