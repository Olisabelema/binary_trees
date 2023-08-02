#include "binary_trees.h"

/**
 * binary_tree_insert_right - A functio that inserts a
 * node as the right-child of another node
 * @parent: A pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: The new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; *old_right_child;

	/* If there's no root node */
	if (parent == NULL)
		return (NULL);
	/*creating a new node*/
	new_node = binary_tree_node(parent, value);

	/**
	 * checking if parent has an old-right child
	 * updatnig the left child with a new node
	 * still keeping the old-left child with a new parent
	*/
	old_right_child = parent->right;
	parent->right = new_node;
	if (old_right_child != NULL)
	{
		new_node->right = old_right_child;
		old_right_child->parent = new_node;
	}
	return (new_node);
}
