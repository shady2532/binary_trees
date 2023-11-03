#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new_bt node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new_bt node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_bt;

	new_bt = malloc(sizeof(binary_tree_t));
	if (new_bt == NULL)
		return (NULL);

	new_bt->data = value;
	new_bt->parent = parent;
	new_bt->left = NULL;
	new_bt->right = NULL;

	return (new_bt);
}