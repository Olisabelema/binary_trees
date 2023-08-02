#include "binary_trees.h"
/**
 * binary_tree_node - function to create parent node
 * @parent: parent node
 * @value: value to insert in node
 * Return: node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (temp)
	{
		temp->n = value;
		temp->parent = parent;
		temp->left = NULL;
		temp->right = NULL;
	}
	return (temp);
}
