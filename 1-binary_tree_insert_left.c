#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to create and insert left child
 * @parent: parent node
 * @value: value to insert in node
 * Return: node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (!parent)
		return (NULL);

	temp = binary_tree_node(parent, value);
	if (!temp)
		return (NULL);
	if (parent->left)
	{
		temp->left = parent->left;
		parent->left->parent = temp;
	}
	parent->left = temp;
	return (temp);
}
