#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	binary_tree_t *parent = node->parent;

	if (parent->parent->left == parent)
		return (parent->parent->right);
	if (parent->parent->right == parent)
		return (parent->parent->left);
	return (NULL);
}
