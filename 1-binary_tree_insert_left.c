#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert node as left-child
 * @parent: pointer to parent node
 * @value: value in the node
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = calloc(1, sizeof(binary_tree_t));
	if (node == NULL || parent == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;

	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;

	return (node);
}
