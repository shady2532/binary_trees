#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new_bt node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new_bt node.
 *
 * Description: If parent already has a left-child, the new_bt node
 *              takes its place and the old left-child is set as
 *              the left-child of the new_bt node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_bt;

	if (parent == NULL)
		return (NULL);

	new_bt = binary_tree_node(parent, value);
	if (new_bt == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_bt->left = parent->left;
		parent->left->parent = new_bt;
	}
	parent->left = new_bt;

	return (new_bt);
}