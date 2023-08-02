#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a new binary tree node
 * @parent:  A pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: The new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));

	/* Check if memory was allocated succefully or not */
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
