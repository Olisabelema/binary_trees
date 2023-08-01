#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_left, height_right;

    if (tree == NULL)
        return (0);

    /* Recursively calculate the height of the left and right subtrees */
    height_left = binary_tree_height(tree->left);
    height_right = binary_tree_height(tree->right);

    /* Return the greater height of the left and right subtrees plus 1 for the current node */
    return (height_left > height_right ? height_left + 1 : height_right + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* Calculate the height of the left and right subtrees */
    size_t height_left = binary_tree_height(tree->left);
    size_t height_right = binary_tree_height(tree->right);

    /* Return the difference between the heights of the left and right subtrees */
    return (height_left - height_right);
}

