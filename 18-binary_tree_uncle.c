#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: A pointer to the node to find the uncle
 *
 * Return: A pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *parent_node, *grandparent_node;

    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    /* Get the parent and grandparent nodes of the current node */
    parent_node = node->parent;
    grandparent_node = node->parent->parent;

    /* If the grandparent has both left and right children */
    if (grandparent_node->left && grandparent_node->right)
    {
        /* If the parent is the left child, return the right uncle */
        if (grandparent_node->left == parent_node)
            return (grandparent_node->right);
        /* Otherwise, return the left uncle */
        else
            return (grandparent_node->left);
    }

    /**
     *  If either left or right child is missing
     *  for the grandparent, there is no uncle
     */  
    return (NULL);
}

